#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,x,i,c;
    char s[50];
    cin>>n;
    if(n<0)
    {
            sprintf(s,"%d",n);
            x=strlen(s);
            if(x==3&&s[x-1]=='0')
            {
                cout<<0<<endl;
                return 0;
            }
            if(s[x-1]>s[x-2])
                c=x-1;
            else
                c=x-2;
            for(i=0;i<strlen(s);i++){
                    if(i!=c)
                    cout<<s[i];}
            cout<<endl;
            return 0;
    }
    cout<<n<<endl;
    return 0;
}
