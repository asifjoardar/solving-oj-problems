#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,n,p=0;
    cin>>n;
    int x[n]={0};
    char s[n][35],c[35];
    for(i=0;i<n;i++)
    {
        cin>>c;
        for(j=0;j<p;j++)
            if(strcmp(c,s[j])==0)
            break;
        if(j==p)
        {
            cout<<"OK"<<endl;
            strcpy(s[p],c);
            p++;
        }
        else
        {
            x[j]++;
            cout<<c<<x[j]<<endl;
        }
    }
}
