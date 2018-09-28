/**
    _________  _________  __________  ______
    ||=====||  |=======|  ||======||  ||||||
    ||     ||  ||             ""      ||
    ||-----||  ||=====||      ""      |||||
    ||     ||         ||      ""      ||
    ||     ||  |=======|  ||======||  ||

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class asif
{
    public:
    int ps,t;
};
bool cmp(asif a,asif b)
{
    if(a.ps==b.ps)
    {
        return a.t<b.t;
    }
    return a.ps>b.ps;
}
main()
{
	int n,m,i,j,t,a,count=0;
	cin>>m>>n;
	asif arr[m+5];
	for(i=0;i<m;i++)
	{
        cin>>arr[i].ps>>arr[i].t;
	}
	sort(arr,arr+m,cmp);
	for(i=0;i<m;i++)
	{
        if(arr[n-1].ps==arr[i].ps&&arr[n-1].t==arr[i].t)
        count++;
	}
	cout<<count<<endl;
}
