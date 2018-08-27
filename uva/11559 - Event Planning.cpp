#include<bits/stdc++.h>
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,b,h,w,i,j,ans[100001],x,p,l;
	while(cin>>n>>b>>h>>w)
	{
		int k=0;
		for(i=0;i<h;i++)
		{
			int m=0;
			cin>>p;
			for(j=0;j<w;j++){
				cin>>l;
				if(l>=n) m=1;
			}
			if(m==1)
				ans[k++]=p*n;
		}
		if(k==0)
			cout<<"stay home\n";
		else
		{
			sort(ans,ans+k);
			if(ans[0]>b)
				cout<<"stay home\n";
			else
			cout<<ans[0]<<endl;
		}
	}
}
