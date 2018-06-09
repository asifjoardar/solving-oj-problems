#include<iostream>
using namespace std;
main()
{
    int i,j=0,p=0;
    char s[201],c[201];
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(p==1)
                c[j++]=' ';
            i=i+2;
            p=0;
        }
        else
        {
            c[j++]=s[i];
            p=1;
        }
    }
    c[j]='\0';
    cout<<c<<endl;
}
