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
bool abc(const pair<string,int> &a,const pair<string,int> &b) 
{ 
    if(a.first.size() == b.first.size()){
    	return a.first<b.first;
    }
    return (a.first.size() < b.first.size());
}
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int i,j,k,l,ans,b[30];
	string s,s1,s2,s3,s4,str;
	string a="abcdefghijklmnopqrstuvwxyz";
	vector<pair<string,int>>v;
	map<string,int>mp;
	for(i=0;i<26;i++)
	{
		s=a[i];
		for(j=i+1;j<26;j++)
		{
			s1+=s+a[j];
			for(k=j+1;k<26;k++)
			{
				s2+=s1+a[k];
				mp[s2]++;
				for(l=k+1;l<26;l++)
				{
					s3+=s2+a[l];
					for(int m=l+1;m<26;m++)
					{
						s4+=s3+a[m];
						ans=a[i]+a[j]+a[k]+a[l]+a[m];
						v.push_back(make_pair(s4,ans));
						s4.clear();
					}
					ans=a[i]+a[j]+a[k]+a[l];
					v.push_back(make_pair(s3,ans));
					s3.clear();
				}
				ans=a[i]+a[j]+a[k];
				v.push_back(make_pair(s2,ans));
				s2.clear();
			}
			ans=a[i]+a[j];
			v.push_back(make_pair(s1,ans));
			s1.clear();
		}
		ans=a[i];
		v.push_back(make_pair(s,ans));
		s.clear();
	}
	
	sort(v.begin(),v.end(),abc);
	ans=1;
	for(auto it=v.begin();it!=v.end();it++)
	{
		mp[it->first]=ans;
		ans++;
	}

	while(cin>>str)
	{
		cout<<mp[str]<<endl;
	}
}
