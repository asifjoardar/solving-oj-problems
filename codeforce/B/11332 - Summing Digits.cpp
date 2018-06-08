#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int sod(char s[],int n)
{
    int sum=0,i;
    char c[20];
    for(i=0;i<n;i++)
    {
        sum+=(s[i]-'0');
    }
    if(sum>0&&sum<=9)
        return sum;
    else{
        sprintf(c,"%d",sum);
        sod(c,strlen(c));}
}
main()
{
    int n,c;
    char s[20];
    while(cin>>s)
    {
        if(s[0]=='0') break;
        n=strlen(s);
        c=sod(s,n);
        cout<<c<<endl;
    }
}
