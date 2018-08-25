#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i,n,t;
	cin>>t;
	while(t--)
	{
        ll min=1000001;
        cin>>n;
        ll *a=(ll*)malloc(n*sizeof(ll));
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<min)
            min=a[i+1]-a[i];
        }
        cout<<min<<endl;
	}
}
