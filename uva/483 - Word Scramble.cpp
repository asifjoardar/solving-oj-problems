#include<bits/stdc++.h>
#define ll long long int
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define pf printf
using namespace std;

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,ans,s1;
    while(getline (cin, s))
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                s1+=s[i];
            }
            else
            {
                reverse(s1.begin(),s1.end());
                ans+=s1;
                ans+=' ';
                s1.clear();
            }
        }
        reverse(s1.begin(),s1.end());
        ans+=s1;
        cout<<ans<<endl;
        ans.clear();
        s1.clear();
    }
}
