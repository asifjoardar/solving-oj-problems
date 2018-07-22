#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,x,n;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        int a=0,b=0,w=0,t=0;
        cin>>n;
        char s[n];
        cin>>s;
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]=='A')
                a++;
            else if(s[j]=='B')
                b++;
            else if(s[j]=='W')
                w++;
            else if(s[j]=='T')
                t++;
        }
        if(a==n)
            printf("Case %d: ABANDONED\n",i);
        else if(b+a==n)
            printf("Case %d: BANGLAWASH\n",i);
        else if (w+a==n)
            printf("Case %d: WHITEWASH\n",i);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(w>b)
            printf("Case %d: WWW %d - %d\n",i,w,b);
        else
            printf("Case %d: DRAW %d %d\n",i,b,t);
    }
}
