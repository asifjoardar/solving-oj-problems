#include <stdio.h>
int main(void)
{
    int a,i,j,n,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        scanf("%d",&a);
        if(a==1||a==0)
            printf("No\n");
        else
        {
            for(j=2;j<=(int)sqrt(a);j++)
            {
                if(a%j==0){
                    c=1;
                break;}
            }
            if(c==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
