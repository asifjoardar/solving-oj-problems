#include<iostream>
#include <sstream>
using namespace std;
int main()
{
    int i,count=0,a;
    char s[100];
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='4'||s[i]=='7')
        count++;
    }
    if(count==4||count==7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
