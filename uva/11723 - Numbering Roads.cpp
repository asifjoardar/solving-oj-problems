#include<bits/stdc++.h>
using namespace std;
main()
{
    int i=1,a,b,x,y;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) break;
        if(a<b) printf("Case %d: %d\n",i,0);
        else
        {
            a=a-b;
            x=a/b;
            y=a%b;
            if(y>0) x=x+1;
            if(x<=26) printf("Case %d: %d\n",i,x);
            else printf("Case %d: impossible\n",i);
        }
        i++;
    }
}
