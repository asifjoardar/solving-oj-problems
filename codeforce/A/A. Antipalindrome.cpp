#include<iostream>
#include<cstring>
using namespace std;
main()
{
    int i,j=0,a;
    char s[51],s1[51],c;
    cin>>s;
    a=strlen(s);
    for(i=a-1;i>=0;i--)
        s1[j++]=s[i];
    s1[j]='\0';
    if(strcmp(s,s1)==0)
    {
        int x=1;
        c=s[0];
        for(i=1;i<a;i++)
        {
            if(c==s[i]) x++;
            else break;
        }
        if(x==a) cout<<0<<endl;
        else cout<<a-1<<endl;
    }
    else
        cout<<a<<endl;
}
