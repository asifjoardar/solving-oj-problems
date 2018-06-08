#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[100000],n,m,car,i,j,x,t;
    while(cin>>n){
    int c0=0;int c1=0;int c2=0;int c3=0;int c4=0;
    int c5=0;int c6=0;int c7=0;int c8=0;int c9=0;
    if(n==0)
    break;
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
            car=car/10;
            m++;
        }
    }
    for(i=m-1;i>=0;i--)
    {
        if(a[i]==0) c0++;
        else if(a[i]==1) c1++;
        else if(a[i]==2) c2++;
        else if(a[i]==3) c3++;
        else if(a[i]==4) c4++;
        else if(a[i]==5) c5++;
        else if(a[i]==6) c6++;
        else if(a[i]==7) c7++;
        else if(a[i]==8) c8++;
        else if(a[i]==9) c9++;
    }
    printf("%d! --\n",n);
    printf("(0) %d (1) %d (2) %d (3) %d (4) %d\n",c0,c1,c2,c3,c4);
    printf("(5) %d (6) %d (7) %d (8) %d (9) %d\n",c5,c6,c7,c8,c9);
    }
    return 0;
}
