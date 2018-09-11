#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int asif(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a=19,n;
	cin>>n;
	while(n)
	{
		if(asif(a)==10)
			n--;
		a++;
	}
	cout<<a-1<<endl;
}
