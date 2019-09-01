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
#define eb emplace_back
#define makep make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define PII pair<ll, ll>
#define pii pair<int, int>
#define what_is(x) cerr<<#x<<" is "<<x<<endl;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector<ll> createtemparray(string pattern)
{
    vector<ll>lps(pattern.size());
    ll index=0;
    for(ll i=1;i<pattern.size();)
    {
        if(pattern[index]==pattern[i])
        {
            lps[i]=index+1;
            index++;
            i++;
        }
        else
        {
            if(index!=0) index=lps[index-1];
            else lps[i]=0,i++;
        }
    }
    return lps;
}
ll kmp(string text,string pattern)
{
    vector<ll>lps=createtemparray(pattern);
    ll i=0,j=0;
    ll count1=0;
    i=0,j=0;
    bool f=false;
    while(i<text.size())
    {
        if(text[i]==pattern[j])
        {
            i++,j++;
            count1++;
        }
        else
        {
            if(j!=0){
                count1=lps[j-1];
                j=lps[j-1];
            }
            else{
                count1=0;
                i++;
            }
        }
        if(j==pattern.size())
        {
            f=true;
            j=lps[j-1];
        }
        //cout<<count1<<endl;
    }
    if(!f)
        return count1;
    else
        return -1;
}

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    //fio();
    ll t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        string pattern,text;
        cin>>text;
        pattern+=text;
        reverse(pattern.begin(),pattern.end());
        ll p=kmp(text,pattern);
        if(p==-1)
        printf("Case %lld: %lld\n",i,(ll)text.size());
        else{
            printf("Case %lld: %lld\n",i,p+(2*(text.size()-p)));
        }
    }
}
