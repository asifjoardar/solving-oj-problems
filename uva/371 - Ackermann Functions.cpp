#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
main()
{
    lli a,b,c,m,n,p,t,i;
    while(cin>>a>>b)
    {
        m=0;
        if(a==0||b==0)
        break;
        if(a>b)
        swap(a,b);
        for(i=b;i>=a;i--)
        {
            p=i;
            c=1;
            if(p%2==0)
            {
                p/=2;
            }
            else
            {
                p=3*p+1;
            }
            while(p!=1)
            {
                if(p%2==0)
                {
                    p/=2;
                    c++;
                }
                else
                {
                    p=3*p+1;
                    c++;
                }

            }
            if(c>=m)
            {
                m=c;
                n=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,n,m);
    }
}
