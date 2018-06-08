#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        a=b=0;
        cin>>s;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='a')
                a++;
            else
                b++;
        }
        if(a>b)
            cout<<b<<endl;
        else
            cout<<a<<endl;
    }
    return 0;
}
