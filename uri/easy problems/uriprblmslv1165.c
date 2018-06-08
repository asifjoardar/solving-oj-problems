#include<stdio.h>
int main()
{
    int n,i,j,a,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=1;
        scanf("%d",&a);
        for(j=2;j<=a/2;j++)
        {
            if(a%j==0)
                p=0;
        }
        if(p==1)
            printf("%d eh primo\n",a);
        else
            printf("%d nao eh primo\n",a);
    }
    return 0;
}
