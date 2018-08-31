#include <bits/stdc++.h>
using namespace std;
int asif(int x,string s,int l)
{
    int count=0;
    string s1=bitset<20>(x).to_string();
    for(int i=0;i<s.size();i++){
        if(s[i]!=s1[i])
            count++;
    }
    if(count<=l)
        return 1;
    else
        return 0;
}
main()
{
    int m,n,k,a[10001];
    cin>>m>>n>>k;
    for(int i=0;i<=n;i++)
        cin>>a[i];
    string s=bitset<20>(a[n]).to_string();
    int ans=0;
    for(int i=0;i<n;i++)
        ans+=asif(a[i],s,k);
    cout<<ans;
}
