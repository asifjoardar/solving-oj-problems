#include<iostream>
using namespace std;
int main()
{
    int a[3],t,n,i;
    cin>>t;
    while(t--)
    {
        int sum=0,max=-1,x;
        cin>>n;
        char s[n];
        cin>>s;
        for(i=0;i<3;i++) a[i]=0;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='R')
                a[0]++;
            else if(s[i]=='B')
                a[1]++;
            else
                a[2]++;
        }
        for(i=0;i<3;i++)
        {
            if(a[i]>max){
                max=a[i];
            x=i;}
        }
        for(i=0;i<3;i++)
        {
            if(i!=x)
                sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
