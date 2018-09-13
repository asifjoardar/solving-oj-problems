#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(const pair<int,string> &x,const pair<int,string> &x1)
{
    return x.first == x1.first?  x.second < x1.second : x.first > x1.first;
}
main()
{
    /*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
    int i,t,n,x;
    int p[]={0,1,1,3,3,5,5,2,2,8,8};
    string s;
    cin>>t;
    pair<int,string>a[t];
    for(i=0;i<t;i++)
    {
        int sum=0;
        cin>>s>>n;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            sum+=p[x];
        }
        a[i].first=sum;
        a[i].second=s;
    }
    sort(a,a+t,cmp);
    for(i=0;i<t;i++)
    {
        cout<<a[i].second<<endl;
    }
}
