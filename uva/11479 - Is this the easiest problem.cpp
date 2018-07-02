#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    long long int a,b,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(a+b<=c||b+c<=a||c+a<=b)printf("Case %d: Invalid\n",i);
        else if(a==b&&b==c) printf("Case %d: Equilateral\n",i);
        else if(a==b&&a!=c&&b!=c||b==c&&b!=a&&c!=a||a==c&&a!=b&&b!=c)
            printf("Case %d: Isosceles\n",i);
        else if(a+b>c&&b+c>a&&c+a>b) printf("Case %d: Scalene\n",i);
    }
}
