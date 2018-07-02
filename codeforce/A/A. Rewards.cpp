#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,i,sum=0,sum1=0,n;
    for(i=0;i<3;i++)
    {
        cin>>a;
        sum+=a;
    }
    for(i=0;i<3;i++)
    {
        cin>>a;
        sum1+=a;
    }
    cin>>a;
    if(sum>0){
        n=sum/5;
        if(n==0&&sum%5!=0)
        a--;
        else if(n>0){
        a=a-n;
        if(sum%5!=0)
            a--;
        }
        //cout<<a<<endl;
    }
    if(sum1>0){
        n=sum1/10;
        if(n==0&&sum1%10!=0)
        a--;
        else if(n>0){
        a=a-n;
        if(sum1%10!=0)
            a--;
        }
        //cout<<a<<endl;
    }
    if(a>=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
