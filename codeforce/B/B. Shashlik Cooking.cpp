#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,b,i,p,j=0;
	cin>>a>>b;
	int x[a+1];
	p=a%(b*2+1);
	if(p>b||p==0)
		p=b+1;
	for(i=p;i<=a;i+=(b*2)+1)
		x[j++]=i;
	cout<<j<<endl;
	for(i=0;i<j;i++) cout<<x[i]<<" ";
	cout<<endl;
}
