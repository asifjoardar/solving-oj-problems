#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    ll n,n1,p,num;
    cin>>n;
    if(n==1){
        cout<<"NO CYCLE\n";
        return 0;
    }
    n1=n;
    map<ll,ll>mp;
    while(1){
        if(mp[n])
            break;
        mp[n]++;
        num=0;
        while(n!=0){
            p=n%10;
            n/=10;
            num+=(p*p);
        }
        n=num;
        if(num==1)
            break;
    }
    if(n1==n)
        cout<<"FULL CYCLE\n";
    else if(n==1)
        cout<<"NO CYCLE\n";
    else
        cout<<"PARTIAL CYCLE\n";
    return 0;
}
