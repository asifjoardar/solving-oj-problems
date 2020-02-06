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
#define PII pair<ll, ll>
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ll n,j,maxi=-1,f=0;
        cin>>n;
        ll a[n],ans[n],ans1[n];
        map<ll,ll>mp;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            mp[a[j]]++;
            maxi=max(a[j],maxi);
            if(mp[a[j]]>=3)
                f=1;
        }
        if(f||maxi>=n)
        {
            pf("Case %lld: no\n",i);
        }
        else
        {
            memset(ans,-1,sizeof ans);
            memset(ans1,-1,sizeof ans1);
            for(j=0;j<n;j++)
            {
                if(mp[a[j]]==2)
                {
                    ans[n-a[j]-1]=a[j];
                    ans[a[j]]=a[j];
                    ans1[n-a[j]-1]=a[j];
                    ans1[a[j]]=a[j];
                }
                else
                {
                    if(ans[a[j]]==-1)
                        ans[a[j]]=a[j];
                    if(ans1[n-a[j]-1]==-1)
                        ans1[n-a[j]-1]=a[j];
                }
            }
            for(j=0;j<n;j++){
                if(ans[j]!=j and ans[j]!=n-j-1)
                {
                    f+=1;
                    break;
                }
            }
            for(j=0;j<n;j++){
                if(ans1[j]!=j and ans1[j]!=n-j-1)
                {
                    f+=1;
                    break;
                }
            }
            if(f==2)
                pf("Case %lld: no\n",i);
            else
                pf("Case %lld: yes\n",i);
        }

    }
    return 0;
}
