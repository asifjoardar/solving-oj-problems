#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a,b;;
	cin>>a>>b;
	if(a==6||b==6)
		cout<<"1/6"<<endl;
	else if(a==1&&b==1)
		cout<<"1/1"<<endl;
	else {
		int x=(a>b)?a:b;
		x=6-x+1;
		if(x==2)
			cout<<"1/3"<<endl;
		else if(x==3)
			cout<<"1/2"<<endl;
		else if(x==4)
			cout<<"2/3"<<endl;
		else
			cout<<"5/6"<<endl;
	}
}
