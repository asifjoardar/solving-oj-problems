#include <bits/stdc++.h>
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a[26]={0},i,n,f=0,count=0;
    char s[100001];
    cin>>n;
    cin>>s;
    if(n==1)
    {
    	cout<<"YES\n";
    	return 0;
    }
    for(i=0;i<n;i++)
    {
    	a[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
    	if(a[i]>1)
    	{
    		f=1;break;
    	}
    }
    if(f==1)
    {
   		cout<<"YES\n";
    }
    else
    	cout<<"NO\n";
    return 0;
}
