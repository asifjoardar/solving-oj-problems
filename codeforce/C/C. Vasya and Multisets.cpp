
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,a[101]={0},count=0,count1=0,m;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++)
    {
    	cin>>x[i];
    	a[x[i]]++;
    }
    for(i=1;i<=100;i++)
    {
    	if(a[i]==1) count++;
    	else if(a[i]>2) count1++;
    }
    if(count%2==0)
    {
    	cout<<"YES\n";
    	m=count/2;
    	for(i=0;i<n;i++)
    	{
    		if(a[x[i]]==1)
    		{
    			if(m>0)
    			{
    				cout<<"A";m--;
    			}
    			else cout<<"B";
    		}
    		else
    			cout<<"A";
    	}
    	cout<<endl;
    }
    else if(count1>0)
    {
    	cout<<"YES\n";
    	m=(count+1)/2;
    	for(i=0;i<n;i++)
    	{
    		if(a[x[i]]==1)
    		{
    			if(m>0)
    			{
    				cout<<"A";
    				m--;
    			}
    			else
    				cout<<"B";
    		}
    		else if(a[x[i]]==2)
    			cout<<"A";
    		else
    		{
    			if(count1!=0)
    			{
    				cout<<"B";count1=0;
    			}
    			else cout<<"A";
    		}
    	}
    	cout<<endl;
    }
    else cout<<"NO\n";
}
