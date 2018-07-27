#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j=0,n,m,sum=0,c=1;
    cin>>n>>m;
    char s[n];
    int p[26],o[26];
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        p[s[i]-'a']=1;
    }
    for(i=0;i<26;i++)
    {
        if(p[i]==1)
            o[j++]=i+1;
    }
    sort(o,o+j);
    //for(i=0;i<j;i++) cout<<o[i]<<endl;
    sum+=o[0];
    for(i=1;i<j;i++)
    {
        if(c==m) break;
        if(o[i]!=o[i-1]+1){
        sum+=o[i];
        c++;}
        else
        {
            o[i]=o[i-1];
        }
        //cout<<sum<<endl;
    }
    if(c<m) cout<<-1<<endl;
    else cout<<sum<<endl;
}
