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

ll a[200001];
ll f(ll n)
{
    ll f=0,j=0,m,i;
    double ans,x;
    m=n;
    while(n%2==0)
    {
        f=1;
        n=n/2;
    }
    if(f==1) {a[j++]=2;f=0;}
    for(i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            f=1;
            n=n/i;
        }
        if(f==1) {a[j++]=i;f=0;}
    }
    if(n>2)
        a[j++]=n;
    ans=m;
    for(i=0;i<j;i++)
    {
        x=(double)a[i];
        ans*=((x-1)/x);
    }
    return (ll)ans;
}

#define mx 100005
ll arr[mx];
ll tree[mx * 3];
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
    tree[node] = tree[Left] + tree[Right];
}
ll query(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(ll node, ll b, ll e, ll i, ll newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    ll n,q,i,x,p,v,l,r;
    cin>>n>>q;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        arr[i]=f(x);
    }
    init(1, 1, n);
    while(q--)
    {
        cin>>x;
        if(x==1)
        {
            cin>>p>>v;
            update(1, 1, n, p, f(v));
        }
        else
        {
            cin>>l>>r;
            cout << query(1, 1, n, l, r) << endl;
        }
    }
    return 0;
}
