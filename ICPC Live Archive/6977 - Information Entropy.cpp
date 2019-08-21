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
#define eb emplace_back
#define makep make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define PII pair<ll, ll>
#define pii pair<int, int>
#define what_is(x) cerr<<#x<<" is "<<x<<endl;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    ll t,i,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>s;
        double a[n],sum=0.0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(s=="bit")
        {
            for(i=0;i<n;i++)
            {
                if(a[i]==0.0)
                    continue;
                double p=a[i]/100.0;
                sum+=(p*log2(p));
            }
        }
        else if(s=="nat")
        {
            for(i=0;i<n;i++)
            {
                if(a[i]==0.0)
                    continue;
                double p=a[i]/100.0;
                sum+=(p*log(p));
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]==0.0)
                    continue;
                double p=a[i]/100.0;
                sum+=(p*log10(p));
            }
        }
        printf("%.12lf\n",sum*-1);
        //cout<<sum*-1<<endl;
    }
}
