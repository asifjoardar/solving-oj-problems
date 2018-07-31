#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,n,t,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char s[99999],c[99999];
        int p[10]={0},k=0;
        for(i=1;i<=n;i++)
        {
            sprintf(c,"%d",i);
            for(j=0;j<strlen(c);j++)
                s[k++]=c[j];
        }
        for(i=0;s[i]!='\0';i++)
        {
            p[s[i]-'0']++;
        }
        for(i=0;i<10;i++){
            if(i==9)
            cout<<p[i]<<endl;
            else
            cout<<p[i]<<" ";
        }
    }
}
