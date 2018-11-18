#include<bits/stdc++.h>
#define ll long long int
#define ui unsigned int
using namespace std;
main()
{
    ll i,l,t,d1,d2,y1,y2,fly,ans;
    string mn1,mn2;
    char c;
    string s[13]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    map<string,int>mp;
    map<string,int>::iterator it;
    for(i=0;i<12;i++)
        mp[s[i]]=i+1;
    cin>>t;
    for(l=1;l<=t;l++)
    {
        cin>>mn1>>d1>>c>>y1;
        cin>>mn2>>d2>>c>>y2;
        ans = (y2/4 - y2/100 + y2/400) - (y1/4 - y1/100 + y1/400);
        if(mp[mn1]<=2)
        {

            if((((y1%4==0)&&(y1%100!= 0))||(y1%400==0))) ans++;
        }
        if((mp[mn2]==2&&d2<29)||(mp[mn2]==1)){
            if((((y2%4==0)&&(y2%100!= 0))||(y2%400==0))) ans--;
           
        }
        printf("Case %lld: %lld\n",l,ans);
    }
}
