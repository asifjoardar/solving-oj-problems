        /** BiSmIlLaHiR rAhMaNiR rAhIm **\

*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*

            \**  DIIT(17th batch) **/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll m,k,i,p=2*(pow(10,5)),q=0,sum=0,ans;
	cin>>m>>k;
	ll a[m];
	map<int,int>mp;
	map<int,int>::iterator itr;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
		p=min(a[i],p);
		q=max(a[i],q);
	}
	if(q==p)
	{
		cout<<0<<endl;
		return 0;
	}
	ll l=mp.size(),count=0,j;
	for(i=q;i>p;i--)
	{
		mp[i]=mp[i]+mp[i+1];
		//cout<<mp[i]<<endl;
	}
	//cout<<mp[l]<<endl;
	for(i=q;i>p;i--)
	{
		if(sum+mp[i]>k)
		{
			i++;sum=0;count++;
		}
		else
			sum+=mp[i];
	}
	if(sum<=k) count++;
	cout<<count<<endl;
}
