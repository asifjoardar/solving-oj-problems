#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,car,x,p,i,j;
    int a[100000];
    while(cin>>n)
    {
        if(n<0) break;
        a[0]=1;m=1;car=0;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<m;j++)
            {
                x=a[j]*i+car;
                a[j]=x%10;
                car=x/10;
            }
            while(car>0)
            {
                a[m]=car%10;
                car/=10;
                m++;
            }
        }
        for(i=0;i<m;i++)
        {
            if(a[i]>0)
            {
                p=a[i];
                break;
            }
        }
        printf("%5d -> %d\n",n,p);
    }
}
