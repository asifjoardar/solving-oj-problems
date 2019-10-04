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
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll q,t;
    cin>>q;
    for(t=1;t<=q;t++)
    {
        ll f=0,n,i,j,tnum,sol,pal,m,x,r;
        cin>>n;
        ll rank[n];
        vector<ll>v[n+1],v1[n+1];
        for(i=0;i<n;i++)
        {
            cin>>tnum>>sol>>pal>>m;
            v[tnum].pb(pal);
            v[tnum].pb(sol);
            for(j=0;j<m;j++)
            {
                cin>>x;
                v1[tnum].pb(x);
            }
        }
        for(i=0;i<n;i++)
            cin>>rank[i];
        ll prevsol=v[rank[0]][1]+v1[rank[0]].size();
        ll prevpal=v[rank[0]][0];
        for(i=0;i<v1[rank[0]].size();i++)
            prevpal+=v1[rank[0]][i];

        for(i=1;i<n;i++)
        {
            r=rank[i];
            ll cursol=v[r][1];
            ll curpal=v[r][0];
            if(prevsol<cursol)
            {
                f=1;break;
            }
            else if(prevsol==cursol && prevpal>curpal)
            {
                f=1;
                break;
            }
            else
            {
                for(j=0;j<v1[r].size();j++)
                {
                    if(cursol+1>prevsol)
                        break;
                    else if(cursol+1==prevsol&&(curpal+v1[r][j])<prevpal)
                        break;
                    else{
                        cursol++;
                        curpal+=v1[r][j];
                    }
                }
                prevsol=cursol;
                prevpal=curpal;
            }

        }
        if(f==1)
            printf("Case %lld: Say no to rumour >:\n",t);
        else
            printf("Case %lld: We respect our judges :)\n",t);
    }
    return 0;
}
