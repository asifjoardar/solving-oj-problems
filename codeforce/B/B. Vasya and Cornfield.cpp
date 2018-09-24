#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,m;
    double a,b,x,y,p1,p2,p3,p4,area1,z,area2,area;
    cin>>b>>a>>m;
    z=b-a;
    area1=abs(a*(a-b)+0+z*(0-a))/2;
    area2=abs(a*(z-b)+b*(b-0)+z*(0-z))/2;
    area=area1+area2;
    //cout<<area<<endl;
    for(i=0;i<m;i++)
    {
    	cin>>x>>y;
    	p1=abs((a*(y-a)+x*(a-0)+0)/2);
    	p2=abs((a*(y-z)+x*(z-0)+b*(0-y))/2);
    	p3=abs((b*(y-b)+x*(b-z)+z*(z-y))/2);
    	p4=abs((z*(y-a)+x*(a-b)+0)/2);
    	//cout<<p1+p2+p3+p4<<endl;
    	if((p1+p2+p3+p4)==area)
    		cout<<"YES\n";
    	else cout<<"NO\n";
    }
    
}
