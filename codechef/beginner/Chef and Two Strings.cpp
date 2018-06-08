#include<iostream>
#include<cstring>
using namespace std;
main()
{
    int i,t,a;
    char s[101],s1[101];
    cin>>t;
    while(t--)
    {
        int c=0,c1=0;
        cin>>s;
        cin>>s1;
        a=strlen(s);
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>='a'&&s[i]<='z'&&s1[i]>='a'&&s1[i]<='z')
            {
                if(s[i]==s1[i])
                    c++;
                else
                    c1++;
            }
            else if(s[i]=='?'||s1[i]=='?'){
                c1++;c++;}
        }
        cout<<a-c<<' '<<c1<<endl;
    }
}
