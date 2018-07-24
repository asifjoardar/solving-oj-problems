#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n=0;
    while(cin>>s)
    {
        int f=0,f1=0,f2=0;
        int len=s.size();
        int l4=0,m15=0,m55=0,l100=0,l400=0;
        if(n>0)
            cout<<endl;
        n++;
        for(int i=0;i<len;i++)
        {
            l4=(l4*10+(s[i]-'0'))%4;
            m15=(m15*10+(s[i]-'0'))%15;
            m55=(m55*10+(s[i]-'0'))%55;
            l100=(l100*10+(s[i]-'0'))%100;
            l400=(l400*10+(s[i]-'0'))%400;
        }
        if(l4==0)
        {
            if(l100==0)
            {
                if(l400==0){
                    cout<<"This is leap year."<<endl;
                    f=1;
                    }
            }
            else{
            cout<<"This is leap year."<<endl;
            f=1;
            }
        }
        if(m15==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            f1=1;
        }
        if(f==1&&m55==0)
        {
            cout<<"This is bulukulu festival year."<<endl;
            f2=1;
        }
        if(f==0&&f1==0&&f2==0)
            cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}
