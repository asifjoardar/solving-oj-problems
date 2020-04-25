#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
using namespace std;

int main() {
	ll i,num=1,num2=1,num1,p,count=0;
	num1=pow(2,63)/2;
	vector<ll>v;
	v.pb(1);
	while(num2<=num1)
	{
		num*=4;
		num2+=num;
		v.pb(num2);
	}
	/*for(i=0;i<v.size();i++)
	    cout<<v[i]<<endl;*/
	ll a,b,q,p1,p2,pos;
	cin>>q;
	while(q--)
	{
		cin>>a>>b;
		pos=b-a+1;
		a=(a%2==0)?a:a+1;
		b=(b%2==0)?b:b-1;
		a=(a)/2;
		b=(b)/2;
		p1=lower_bound(v.begin(),v.end(),a)-v.begin();
		p2=upper_bound(v.begin(),v.end(),b)-v.begin();
		printf("%.9lf\n",((double)(p2-p1)/(double)pos));
	}
	return 0;
}
