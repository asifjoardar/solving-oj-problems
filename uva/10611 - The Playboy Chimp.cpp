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
    fio();
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll n,q,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    while(q--)
    {
        ll num;
        cin>>num;
        ll l=0,r=n-1,mx=0,mn=2147483648;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(a[mid]>num){
                r=mid-1;
                if(a[mid]<mn)
                    mn=a[mid];
            }
            else
            {
                l=mid+1;
            }
        }
        l=0,r=n-1;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(a[mid]<num){
                l=mid+1;
                if(a[mid]>mx)
                    mx=a[mid];
            }
            else
            {
                r=mid-1;
            }
        }
        //cout<<mx<<" "<<mn<<endl;
        if(mx==0&&mn==2147483648)
            cout<<"X X\n";
        else if(mx==0)
            cout<<"X "<<mn<<endl;
        else if(mn==2147483648)
            cout<<mx<<" X\n";
        else
        cout<<mx<<" "<<mn<<endl;
    }
    return 0;
}
