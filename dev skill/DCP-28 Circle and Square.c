#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float c,a,b,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f %f",&a,&b);
        c=sqrt(2*(a*a));
        if((int)b==(int)c)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
