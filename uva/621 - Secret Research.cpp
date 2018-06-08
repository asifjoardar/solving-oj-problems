#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int t,n;
    char s[1000];
    cin>>t;
    while(t--)
    {

        cin>>s;
        n=strlen(s);
        if(s[n-2]=='3'&&s[n-1]=='5')
            cout<<'-'<<endl;
        else if(s[0]=='9'&&s[n-1]=='4')
            cout<<'*'<<endl;
        else if(s[0]=='1'||s[1]=='9'||s[2]=='0')
            cout<<'?'<<endl;
        else if(s[0]=='1'||s[0]=='4'||s[0]=='7'&&s[1]=='8')
            cout<<'+'<<endl;

    }
}
