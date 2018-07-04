#include<bits/stdc++.h>
using namespace std;
main()
{
    int i;
    int sum=0,sum1=0;
    char c;
    for(i=0;i<64;i++)
    {
        cin>>c;
            if(c=='Q') sum+=9;
            else if(c=='R') sum+=5;
            else if(c=='B') sum+=3;
            else if(c=='N') sum+=3;
            else if(c=='P') sum+=1;
            else if(c=='q') sum1+=9;
            else if(c=='r') sum1+=5;
            else if(c=='b') sum1+=3;
            else if(c=='n') sum1+=3;
            else if(c=='p') sum1+=1;
    }
        if(sum>sum1)
            cout<<"White"<<endl;
        else if(sum<sum1)
            cout<<"Black"<<endl;
        else
            cout<<"Draw"<<endl;
}
