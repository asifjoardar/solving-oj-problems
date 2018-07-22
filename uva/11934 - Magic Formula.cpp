#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,d,l,x,i;
    while(cin>>a>>b>>c>>d>>l)
    {
        int count=0;
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        for(i=0;i<=l;i++)
        {
            x=(a*(i*i))+(b*i)+c;
            if(x%d==0)
                count++;
        }
        cout<<count<<endl;
    }
}
