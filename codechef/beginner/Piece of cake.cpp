#include<iostream>
using namespace std;
main()
{
    int a[26],t,i,sum,max;
    char s[51];
    cin>>t;
    while(t--)
    {
        sum=0;
        for(i=0;i<26;i++)
            a[i]=0;
        cin>>s;
        for(i=0;s[i]!='\0';i++)
        {
            a[s[i]-97]++;
        }
        max=-1;
        for(i=0;i<26;i++)
        {
            sum=sum+a[i];
            if(a[i]>max)
                max=a[i];
        }
        if(sum/max==2&&sum%max==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
