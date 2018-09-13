#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    int a,b;
    cin>>a>>b;
    if(a==b&&a==1)
    	cout<<1<<endl;
    else if(a-b>=b)
    	cout<<b+1<<endl;
    else
    	cout<<b-1<<endl;
}
