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
    ll t,i;
    map<string,vector<string>>mp;
    map<string,ll>mp1;
    vector<string>ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ll m,j,k,l,f=0,l1,l2;
        string p,pid,vnum;
        cin>>p>>m;
        string s[m];
        for(j=0;j<p.size();j++)
        {
            if(p[j]!=':')
                pid+=p[j];
            else
            {
                for(j+=1;j<p.size();j++)
                    vnum+=p[j];
            }
        }
        for(j=0;j<m;j++)
        {
            cin>>s[j];
            if(mp1[s[j]]==0)
                f=1;
            string pid1,vnum1;
            for(k=0;k<s[j].size();k++)
            {
                if(s[j][k]!=':')
                pid1+=s[j][k];
                else
                {
                    for(k+=1;k<p.size();k++)
                        vnum1+=s[j][k];
                }
            }
            if(pid==pid1&&vnum!=vnum1)
                f=1;
        }
        for(j=0;j<m;j++)
        {
            string pid,vnum;
            for(k=0;k<s[j].size();k++)
            {
                if(s[j][k]!=':')
                pid+=s[j][k];
                else
                {
                    for(k+=1;k<p.size();k++)
                        vnum+=s[j][k];
                }
            }
            for(k=j+1;k<m;k++)
            {
                string pid1,vnum1;
                for(l=0;l<s[k].size();l++)
                {
                    if(s[k][l]!=':')
                    pid1+=s[k][l];
                    else
                    {
                        for(l+=1;l<p.size();l++)
                            vnum1+=s[k][l];
                    }
                }
                if(pid==pid1&&vnum!=vnum1)
                    f=1;
            }
        }


        for(j=0;j<m;j++)
        {
            for(k=0;k<mp[s[j]].size();k++)
            {
                string pid,vnum;
                //cout<<"** "<<mp[s[j]].size()<<endl;
                for(l=0;l<mp[s[j]][k].size();l++)
                {
                    if(mp[s[j]][k][l]!=':')
                        pid+=mp[s[j]][k][l];
                    else
                    {
                        for(l=l+1;l<mp[s[j]][k].size();l++)
                        {
                            vnum+=mp[s[j]][k][l];
                        }
                    }
                }
                for(l=j+1;l<m;l++)
                {
                    for(l1=0;l1<mp[s[l]].size();l1++)
                    {
                        string pid1,vnum1;
                        for(l2=0;l2<mp[s[l]][l1].size();l2++)
                        {
                            if(mp[s[l]][l1][l2]!=':')
                                pid1+=mp[s[l]][l1][l2];
                            else
                            {
                                for(l2=l2+1;l2<mp[s[l]][l1].size();l2++)
                                {
                                    vnum1+=mp[s[l]][l1][l2];
                                }
                            }
                        }
                        if(pid==pid1&&vnum!=vnum1)
                            f=1;
                    }
                }
                
            }
        }
        if(f==0)
        {
            ans.pb(p);
            mp1[p]=1;
            for(j=0;j<m;j++)
            {
                mp[s[j]].pb(p);
                mp[p].pb(s[j]);
            }
            sort(ans.begin(),ans.end());
            pf("Request %lld: OK\n",i);
            for(j=0;j<ans.size();j++)
                cout<<ans[j]<<endl;
        }
        else
        {
            pf("Request %lld: ERROR\n",i);
        }

    }
    return 0;
}
