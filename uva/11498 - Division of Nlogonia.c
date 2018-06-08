#include<stdio.h>
int main()
{
    int n,a,a1,b,b1,i;
    for( ; ; )
    {
        scanf("%d",&n);
        if(n==0)
            break;
        else
        {
            scanf("%d %d",&a,&b);
            for(i=0;i<n;i++)
            {
                scanf("%d %d",&a1,&b1);
                if(a>a1&&b>b1)
                {
                    printf("SO\n");
                }
                else if(a>a1&&b<b1)
                    printf("NO\n");
                else if(a<a1&&b>b1)
                    printf("SE\n");
                else if(a<a1&&b<b1)
                {
                    printf("NE\n");
                }
                else if(a==a1||b==b1)
                    printf("divisa\n");
            }
        }
    }
    return 0;
}
