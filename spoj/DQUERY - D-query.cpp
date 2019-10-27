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
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};
 
const int MAX = 300005;
const int MAX1 = 1e6 + 5;
 
int a[MAX],bit[MAX],lv[MAX1];
 
struct query
{
    int l,r,indx;
}qry[MAX];
     
bool cmp(query x,query y)
{
    return x.r<y.r;
}
 
void update(int idx,int val,int n)
{
    while(idx<=n)
    {
        bit[idx]+=val;
        idx+=(idx&-idx);
    }
}
     
int Query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=bit[idx];
        idx-=(idx&-idx);
    }
    return sum;
}
 
void solve(int n,int q)
{
    memset(bit,0,sizeof(bit));
    memset(lv,-1,sizeof(lv));
 
    int qcount=0,ans[q];
 
    for(int i=0;i<n;i++)
    {
        if(lv[a[i]]!=-1)
            update(lv[a[i]]+1,-1,n);
 
        lv[a[i]]=i;
 
        update(i+1,1,n);
 
        while(qcount<q && qry[qcount].r==i+1)
        {
            ans[qry[qcount].indx]=Query(qry[qcount].r)-Query(qry[qcount].l-1);
            qcount++;
        }
    }
    for(int i=0;i<q;i++)
        printf("%d\n",ans[i]);
}
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    int n,i,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d%d",&qry[i].l,&qry[i].r);
        qry[i].indx=i;
    }
    sort(qry,qry+q,cmp);
    solve(n,q);
    return 0;
}
