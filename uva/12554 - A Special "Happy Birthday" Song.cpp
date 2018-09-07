#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,i,j,f=0;
	char s[16][20]={
		"Happy",
		"birthday",
		"to",
		"you",
		"Happy",
		"birthday",
		"to",
		"you",
		"Happy",
		"birthday",
		"to",
		"Rujia",
		"Happy",
		"birthday",
		"to",
		"you"
	};
	cin>>n;
	char c[n][101];
	for(i=0;i<n;i++){
		cin>>c[i];
	}
	i=0;j=0;
	while(1)
	{
		printf("%s: %s\n",c[i],s[j]);
		if(i==n-1)
			f=1;
		if(j==15&&f==1)
			break;
		i++;j++;
		if(i>=n)
			i=0;
		if(j>=16)
			j=0;
	}
}
