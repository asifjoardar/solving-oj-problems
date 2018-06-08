#include<stdio.h>
typedef long long int lli;
int asif(int a,lli b)
{
    if(b==0) return 1%5;
    else if(b==1) return a%5;
    if(b&1)
    {
        return ((a%5)*(asif(a,b-1)%5))%5;
    }
    else
        {
            int x=asif(a,b/2);
        return ((x%5)*(x%5))%5;
        }
}
int main()
{
    int j,t,a,sum;
    lli b;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d %lld",&a,&b);
        for(j=1;j<=a;j++)
            sum=sum+asif(j,b);
        printf("%d\n",sum%5);
    }
    return 0;
}
