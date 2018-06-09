#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a,i;
    char s[101],s1[101];
    cin>>s;
    cin>>s1;
    a=strlen(s);
    for(i=0;i<a;i++)
    {
        if(s[i]!=s1[i])
            cout<<1;
        else
            cout<<0;
    }
    cout<<endl;
    return 0;
}
