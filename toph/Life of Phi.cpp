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

ll phi[1000006],m[1000006];
void asif(int n)
{
    ll i,j;
    for(i=1;i<=n;i++) phi[i]=i;
    phi[1]=1;m[1]=1;
    for(i=2;i<=n;i++)
    {
        if(!m[i])
        {
            for(j=i;j<=n;j+=i)
            {
                m[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    asif(1000005);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<=3)
            cout<<0<<endl;
        else
            cout<<(((n*n)+n)/2)-((phi[n]/2)*n)-n<<endl;
    }
    return 0;
}
