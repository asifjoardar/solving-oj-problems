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
     
    vector<ll>v[1000001];
    void asif(ll n)
    {
        ll num=n,count=0,i,ans=1;
        while(n%2==0)
        {
            count++;
            n/=2;
        }
        if(count>0)
        {
            ans*=((count*2)+1);
        }
        for(i=3;i<=sqrt(n);i+=2)
        {
            count=0;
            while(n%i==0)
            {
                count++;
                n/=i;
            }
            if(count>0)
            {
                ans*=((count*2)+1);
            }
        }
        if(n>1)
            ans*=3;
        //cout<<num<<" "<<ans<<endl;
        v[ans].pb(num*num);
    }
     
    int main()
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif
        ll i,t,n,m,k,pos1,pos2;
        for(i=2;i<=100000;i++)
        {
            asif(i);
        }
        scanf("%lld",&t);
        for(i=1;i<=t;i++)
        {
            scanf("%lld%lld%lld",&k,&n,&m);
            auto it=lower_bound(v[k].begin(),v[k].end(),n);
            pos1=(it-v[k].begin())+1;
            it=upper_bound(v[k].begin(),v[k].end(),m);
            it--;
            pos2=(it-v[k].begin())+1;
            printf("%lld\n",(pos2-pos1)+1);
        }
        return 0;
    } 
