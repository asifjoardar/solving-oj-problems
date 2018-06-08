#include<stdio.h>
int main()
{
    int a,b,i,c,sum,n,j,k;
    scanf("%d",&n);
    for(j=0;j<n;j++){
            sum=0;
    scanf("%d%d",&a,&b);
    c=a*b;
    for(i=1;i<=a;i++)
    {
        sum=0;
        for(k=1;k<=b;k++){
        sum=sum+k;
        }
        b=sum;
    }
    printf("%d\n",sum);
    }
    return 0;
}
