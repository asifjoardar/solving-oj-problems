/** BiSmIlLaHiR rAhMaNiR rAhIm **\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
            \**  DIIT(17th batch) **/

#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI 3.141592653589793
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

double x,y,c;
double eps = 0.000001;
double abc(double mid)
{
    double h1=sqrt((y*y)-(mid*mid));
    double h2=sqrt((x*x)-(mid*mid));
    return ((h1*h2)/(h1+h2));
}

void bi()
{
    double mid,low=0,high=min(x,y);
    while((high-low)>eps){
        mid=(high+low)/2.0;
        double h=abc(mid);
        if(h<=c)
        {
            high=mid;
        }
        else
            low=mid;
    }
    printf("%.3lf\n",low);
}

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    ll t,i;
    while(cin>>x>>y>>c)
    {
        bi();
    }
}
