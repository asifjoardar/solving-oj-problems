#include<iostream>
using namespace std;
int main()
{
    int count=0,i,n;
    cin>>n;
    char s[n];
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
            count++;
    }
    cout<<count<<endl;
    return 0;
}
