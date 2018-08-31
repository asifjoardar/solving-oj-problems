//optimal way
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
    int i,n,x,a[100001]={0},m=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
        m=max(m,a[x]);
    }
    cout<<n-m<<endl;
}


/**
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int i,x,n;
	map<int ,int>m;
	map<int ,int>:: iterator it=m.begin();
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		m[x]++;
	}
	int ans=0;
	while(1)
	{
		int boro=-1,choto=100001,count=0;
		for(it=m.begin();it!=m.end();it++)
		{
			choto=min(choto,it->second);
			boro=max(boro,it->second);
		}
		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second!=0){
				it->second-=1;
				count++;
			}
		}
		if(boro==0&&choto==0)
			break;
		ans+=count-1;
	}
	cout<<ans<<endl;
}
*/
