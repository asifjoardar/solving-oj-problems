#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int n,i,x01=0,x00=0,x10=0,x11=0,sum=0;
    string o,p;
    cin>>n>>o>>p;
    for(i=0;i<n;i++)
    {
        if(o[i]=='0'&&p[i]=='1') x01++;
        else if(o[i]=='1'&&p[i]=='1') x11++;
        else if(o[i]=='0'&&p[i]=='0') x00++;
        else if(o[i]=='1'&&p[i]=='0') x10++;
    }
    for(i=0;i<n;i++)
    {
        if(o[i]=='0'&&p[i]=='1'){
                sum+=x10;
                x01--;
        }
        else if(o[i]=='1'&&p[i]=='1'){
                sum+=x00;
                x11--;
        }
        else if(o[i]=='0'&&p[i]=='0'){
                sum+=x11+x10;
                x00--;
        }
        else if(o[i]=='1'&&p[i]=='0'){
                sum+=x00+x01;
                x10--;
        }
    }
    cout<<sum<<endl;
}
