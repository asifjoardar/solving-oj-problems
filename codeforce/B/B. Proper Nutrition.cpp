#include<bits/stdc++.h>
using namespace std;
main()
{
    int c,a,b,i,p;
    cin>>c>>a>>b;
    for(i=0;i*a<=c;i++)
    {
        p=c-i*a;
        if(p%b==0)
        {
            printf("YES\n%d %d\n",i,p/b);
            return 0;
        }
    }
    cout<<"NO\n";
}
