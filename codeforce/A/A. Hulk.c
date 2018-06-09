#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==1)
        printf("I hate it\n");
    else
    {
        if(n%2==0)
        {
            for(i=0;i<n-1;i++)
            {
                if(!(i&1))
                    printf("I hate that ");
                else
                    printf("I love that ");
            }
            printf("I love it\n");
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(!(i&1))
                    printf("I hate that ");
                else
                    printf("I love that ");
            }
            printf("I hate it\n");
        }
    }
    return 0;
}
