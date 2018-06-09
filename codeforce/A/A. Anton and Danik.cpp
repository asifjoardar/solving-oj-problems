#include<iostream>
using namespace std;
int main()
{
    int i,a=0,d=0,n;
    cin>>n;
    char s[n];
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
