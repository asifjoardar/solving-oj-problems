#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int a[1001];
void sieve()
{
	 int i,j;
	 for(i=4;i<1001;i+=2) a[i]=1;
	 for(i=3;i<1001;i+=2)
	 {
        if(a[i]==0)
        {
            for(j=3;j*i<1001;j++)
            a[i*j]=1;
        }
	 }
}
void asif(int n)
{
    for(int i=1;i<=n;i++)
    if(a[i]==0)
        cout<<" "<<i;
        cout<<endl;
}
main(){
    sieve();
    int n,c,i,j,m;
     int b[1001];
    while(cin>>n>>c)
    {
        cout<<n<<" "<<c<<":";
        if(n<=c*2)
        {
            asif(n);
        }
        else
        {
            int x=0,count=0;
            j=0;
            for(i=1;i<=n;i++)
            {
                if(a[i]==0)
                {
                    count++;
                    b[j++]=i;
                }
            }
            if(count%2==0)
            {
                m=(count-(c*2))/2;
                if(count<(c*2)) asif(n);
                else{
                for(i=m;;i++)
                {
                    cout<<" "<<b[i];x++;
                    if(x==(c*2))
                    {
                        cout<<endl;
                        break;
                    }
                }
                }
            }
            else
            {
                m=(count-(c*2-1))/2;
                if(count<(c*2-1)) asif(n);
                else{
                for(i=m;;i++)
                {
                    cout<<" "<<b[i];x++;
                    if(x==(c*2-1))
                    {
                        cout<<endl;
                        break;
                    }
                }
                }
            }
        }
        cout<<endl;
    }
}
