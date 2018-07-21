#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i;
    char s[101];
    cin>>n>>m;
    cin>>s;
    while(m--)
    {
        for(i=0;i<n;i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<endl;
}
