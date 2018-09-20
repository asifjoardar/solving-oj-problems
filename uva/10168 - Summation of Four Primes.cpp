#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int a[10000001],p[10000001],k;
void sieve()
{
	 int i,j;
	 for(i=4;i<10000001;i+=2) a[i]=1;
	 p[k++]=2;
	 for(i=3;i<10000001;i+=2)
	 {
        if(a[i]==0)
        {
            p[k++]=i;
            for(j=3;j*i<10000001;j++)
            a[i*j]=1;
        }
	 }
}
main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n,i;
    while(cin>>n)
    {
    	if(n<8){
    	cout<<"Impossible."<<endl;
    	continue;
    	}

    		if(n%2==0){
    			cout<<2<<" "<<2<<" ";
    			n-=4;
    		}
    		else{
    			cout<<2<<" "<<3<<" ";
    			n-=5;
    		}
    		for(i=0;i<k;i++)
    		{
    			if(a[n-p[i]]==0)
    			{
    				cout<<p[i]<<" "<<n-p[i]<<endl;
    				break;
    			}
    		}
    }
}
