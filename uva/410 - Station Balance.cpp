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
#define fs first
#define ss second
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define ki_ase(x,y) cout<<x<<" "<<y<<endl;
#define SIZE 200000000
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};


int main()
{
    //fio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll c,s,t=1;
    while(cin>>c>>s){
    	ll i,j;
    	double sum=0.0,ans=0;
    	ll a[s];
        vector<PII>v;
        map<ll,ll>mp;
        map<ll,ll>mp1;
    	for(i=0;i<s;i++){
    		cin>>a[i];
    		sum+=a[i];
            mp[i]=a[i];
            v.pb({a[i],i});
    	}
    	sum/=(double)c;
    	sort(v.begin(),v.end());
        
    	cout<<"Set #"<<t<<endl;

        if(c>=s){
            for(i=0;i<s;i++,j--){
                pf(" %lld: %lld\n",i,a[i]);
                ans+=abs(a[i]-sum);
            }
            for(i=s;i<c;i++){
                pf(" %lld:\n",i);
                ans+=sum;
            }
            pf("IMBALANCE = %.5lf\n\n",ans);
        }
        
    	else{
            ll num=0;
            if(s%c)
                num=(c-(s%c));
            for(i=0,j=s-1;i<num;i++,j--){
                mp1.insert({v[j].ss,-1});
                ans+=abs(v[j].fs-sum);
            }
    		for(ll k=0;i<c;i++,j--,k++){
                mp1[min(v[k].ss,v[j].ss)]=max(v[k].ss,v[j].ss);
    			ans+=abs((v[k].fs+v[j].fs)-sum);
    		}
            i=0;
            for(auto it=mp1.begin();it!=mp1.end();it++,i++){
                if(it->ss==-1){
                    pf(" %lld: %lld\n",i,a[it->fs]);
                }
                else{
                    pf(" %lld: %lld %lld\n",i,a[it->fs],a[it->ss]);
                }
            }
    		pf("IMBALANCE = %.5lf\n\n",ans);
    	}

    	t++;
    }
    return 0;
}
