#include<iostream>
#include <sstream>
using namespace std;
int main()
{
    int i,p=0,a;
    char s[10];
    cin>>s;
    p=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!='4'&&s[i]!='7')
        {
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"YES\n";
    else
    {
        stringstream geek(s);
        geek >> a;
        if(a%4==0||a%7==0||a%47==0||a%74==0||a%477==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

