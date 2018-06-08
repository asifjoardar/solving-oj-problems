#include<iostream>
#include<cstdio>
using namespace std;
int asif(int a[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(a[i]!=0)
        {
            cout<<" "<<i;
        }
    }
    cout<<endl;
}
int main()
{
    int a[1001],b[1001],i,j,n,c,m;
    for(i=0;i<1001;i++) a[i]=1;
    a[0]=0;
    for(i=4;i<1001;i+=2) a[i]=0;
    for(i=3;i<1001;i++)
    {
        if(a[i]!=0)
        {
            for(j=3;i*j<1001;j++)
                a[i*j]=0;
        }
    }
    while(scanf("%d%d",&n,&c)==2)
    {
        cout<<n<<" "<<c<<":";
        if(n<=c*2)
        {
            asif(a,n);
        }
        else
        {
            int x=0,count=0;
            j=0;
            for(i=1;i<=n;i++)
            {
                if(a[i]!=0)
                {
                    count++;
                    b[j++]=i;
                }
            }
            if(count%2==0)
            {
                m=(count-(c*2))/2;
                if(count<(c*2)) asif(a,n);
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
                if(count<(c*2-1)) asif(a,n);
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
    return 0;
}
