#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,t,n,m,m1,h,h1,x,j;
    char c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int p=100001;
        cin>>n;
        cin>>h>>c>>m;
        for(j=0;j<n;j++)
        {
            cin>>h1>>c>>m1;
            cin>>x;
            if(h<h1){
                x+=((h1*60)+m1)-((h*60)+m);
            }
            else if(h==h1)
            {
                if(m<=m1)
                    x+=((h1*60)+m1)-((h*60)+m);
                else
                    x+=(((h1+24)*60)+m1)-((h*60)+m);
            }
            else
                x+=(((h1+24)*60)+m1)-((h*60)+m);
            p=min(p,x);
        }
        printf("Case %d: %d\n",i,p);
    }
}
