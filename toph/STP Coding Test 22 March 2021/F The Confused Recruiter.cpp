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
    ll n,q,i;
    cin>>n>>q;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){
        ll sum,num,i=0,j=0,ans=0;
        cin>>num;
        sum=a[0];
        while(i<=j and j<n){
            if(sum<num){
                j++;
                sum+=a[j];
            }
            else if(sum>num){
                if(i==j){
                    i++;
                    j++;
                    sum=a[j];
                }
                else{
                    sum-=a[i];
                    i++;
                }
            }
            else if(sum==num){
                ans++;
                sum-=a[i];
                i++;
                j++;
                sum+=a[j];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
