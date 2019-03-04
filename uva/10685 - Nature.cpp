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
#define PI 3.141592653589793
#define white 1
#define gray 2
#define black 3
#define PII pair<int, int>
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void initializeset(int parent[],int rankparent[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
        rankparent[i]=1;
    }
}

int findparent(int parent[],int x)
{
    if(x!=parent[x])
        return parent[x]=findparent(parent,parent[x]);
    else
        return parent[x];
}

void unionset(int parent[],int rankparent[],int x,int y)
{
    int px=findparent(parent,x);
    int py=findparent(parent,y);
    if(px==py) return;
    else
    {
        parent[px]=py;
        rankparent[py]+=rankparent[px];
    }
}

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    int c,r,i;
    while(cin>>c>>r)
    {
        map<string,int>mp;
        map<int,int>mp1;
        if(c==0&&r==0) break;
        int parent[5005]={0};
        int rankparent[5005]={0};
        string s,s1;
        for(i=0;i<c;i++)
        {
            cin>>s;
            mp[s]=i;
        }
        initializeset(parent,rankparent,c);
        for(i=0;i<r;i++)
        {
            cin>>s>>s1;
                unionset(parent,rankparent,mp[s],mp[s1]);
               
        }
        int ans=-1;
        for(i=0;i<c;i++)
            if(rankparent[i]>ans)
                ans=rankparent[i];
        cout<<ans<<endl;
    }
}
