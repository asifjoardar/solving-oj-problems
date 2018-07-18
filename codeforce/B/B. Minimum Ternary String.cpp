#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,c=0,j=0;
    char s[100001],s1[100001];
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1')
            c++;
        else s1[j++]=s[i];
    }
    s1[j]='\0';
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='2') break;
        else cout<<0;
    }
    while(c>0)
    {
        cout<<1;
        c--;
    }
    cout<<s1+i<<endl;
}
