#include<stdio.h>
int main()
{
    int t,i,count,j,b;
    int a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        count=0;
        scanf("%d",&a);
        b=sqrt(a);
        for(j=2;j<=b;j=j+2)
        {
            if(a%j==0)
            {
                if(j%2==1||(a/j)%2==1)
                    count++;
            }
        }
        if(a%2==1)
            count=count+1;
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
