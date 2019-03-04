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
        rankparent[i]=0;
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
    if(rankparent[px]<rankparent[py])
        parent[px]=py;
    else if(rankparent[px]>rankparent[py])
        parent[py]=px;
    else
    {
        parent[py]=px;
        rankparent[px]++;
    }
}

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    int t;
    cin>>t;
    while(t--)
    {
        int parent[200]={0};
        int rankparent[200]={0};
        string s;
        char c;
        cin >> c;
        int ans=c-'A'+1;
        cin.ignore();
        initializeset(parent,rankparent,c-'A'+1);
        while(getline(cin, s) && s != "")
        {
            if(findparent(parent,s[0]-'A')!=findparent(parent,s[1]-'A')){
                unionset(parent,rankparent,s[0]-'A',s[1]-'A');
                ans--;
            }
        }
        cout<<ans<<endl;
        if(t)
            cout << endl;
    }
}
