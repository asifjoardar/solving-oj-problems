#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,x=-1;
    cin>>n >> k;
    string t,ans="";
    cin>> t;
    for(int i=1;i<t.size();i++){
    //cout<<t.substr(0,i)<<" "<<t.substr(t.size()-i,t.size())<<endl;
        if(t.substr(0,i)==t.substr(t.size()-i,t.size())) x=i;
    }
    if(x==-1)
    {
        while(k>0){
        cout<<t;
        k--;}
        cout<<endl;
    }
    else
    {
        cout<<t;
        while(k>1)
        {
            cout<<t.substr(x,t.size());
            k--;
        }
        cout<<endl;
    }
}
