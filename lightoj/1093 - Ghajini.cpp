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

#define mx 100005
ll arr[mx];
ll tree[mx * 3],tree1[mx * 3];
void init(ll node, ll b, ll e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = max(tree[Left],tree[Right]);
}
void init1(ll node, ll b, ll e)
{
    if (b == e) {
        tree1[node] = arr[b];
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    init1(Left, b, mid);
    init1(Right, mid + 1, e);
    tree1[node] = min(tree1[Left],tree1[Right]);
}
ll query(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return -1000000000;
    if (b >= i && e <= j)
        return tree[node];
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);
    return max(p1 , p2);
}
ll query1(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 1000000000;
    if (b >= i && e <= j)
        return tree1[node];
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query1(Left, b, mid, i, j);
    ll p2 = query1(Right, mid + 1, e, i, j);
    return min(p1,p2);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //fio();
    ll t,i,j,n,d;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ll ans=0;
        cin>>n>>d;
        for(j=1;j<=n;j++)
        {
            cin>>arr[j];
        }
        init(1,1,n);
        init1(1,1,n);
        for(j=1;j<=n-d+1;j++)
        {
            ans=max(query(1,1,n,j,j+d-1)-query1(1,1,n,j,j+d-1),ans);
        }
        pf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}
