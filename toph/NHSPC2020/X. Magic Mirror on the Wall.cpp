/********** BiSmIlLaHiR rAhMaNiR rAhIm ***********\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
\*************** DIIT(17th batch) ****************/

#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

int main()
{
    
    //fio();
    ll t;
    cin>>t;
    while(t--){
    	double x1,x2,y1,y2,p1,p2,q1,q2,m,b,ans;
    	cin>>x1>>y1>>x2>>y2;
    	p1=x1;
    	q1=-1.0*y1;
    	p2=x2;
    	q2=-1.0*y2;
    	
        m=abs((q2-y1)/(p2-x1))*2.0;
        b=abs((-1.0*(((q2-y1)/(p2-x1))*x1))+y1)*2.0;
        ans=b/m;
        //cout<<m<<endl;
    	printf("%.16lf %.16lf\n",ans,0.0);
    	//cout<<l<<endl;
    }
    return 0;
}
