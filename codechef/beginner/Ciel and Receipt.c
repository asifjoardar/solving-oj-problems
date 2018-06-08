#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,i,j,sum,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=0;
        for(j=11;j>=0;j--)
        {
            b=(pow(2,j));
            sum=sum+(a/b);
            a=a%b;
        }
        printf("%d\n",sum);
    }
}
