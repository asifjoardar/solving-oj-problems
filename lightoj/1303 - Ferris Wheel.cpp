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
    fio();
    ll t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ll n,m,j,k,l,num,count=0;
        cin>>n>>m;
        vector<ll>vis[n],ase[m];
        deque<ll>queue;
        for(j=0;j<n;j++)
            for(k=0;k<m;k++)
                vis[j].pb(0);
        for(j=0;j<n;j++)
            queue.pb(j);
        ll p=0;
        for(j=0;;j++)
        {
            num=-1;
            if(!queue.empty())
            {
                if(vis[queue.front()][j%m]==0)
                {
                    num=queue.front();
                    vis[num][j%m]=1;
                    queue.pop_front();
                }
                else
                {
                    for(k=0;k<queue.size();k++)
                    {
                        if(vis[queue[k]][j%m]==0)
                        {
                            num=queue[k];
                            vis[num][j%m]=1;
                            queue.erase(queue.begin()+k);
                            break;
                        }
                    }
                }
            }
            //cout<<ase[j%n].size()<<endl;
            if(!ase[j%m].empty())
            {
                queue.pb(ase[j%m][0]);
                ase[j%m].clear();
            }
            if(num!=-1)
            {
                ase[j%m].pb(num);
            }
            ll cnt1=0;
            for(k=0;k<n;k++)
            {
                ll cnt=0;
                for(l=0;l<m;l++)
                {
                    if(vis[k][l]==1)
                        cnt++;
                }
                if(cnt==m)
                {
                    cnt1++;
                    for(l=0;l<queue.size();l++)
                    {
                        if(queue[l]==k)
                            queue.erase(queue.begin()+l);
                    }
                }
            }
            ll cnt2=0;
            for(k=0;k<m;k++)
                if(ase[k].empty())
                    cnt2++;
            count++;
            if(cnt1==n&&cnt2==m&&queue.empty()) break;
        }
        printf("Case %lld: %lld\n",i,count*5);
    }
    return 0;
}
