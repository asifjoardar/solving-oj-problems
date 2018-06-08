#include<stdio.h>
int main()
{
    int t,a,i;
    scanf("%d",&t);
    while(t--)
    {
        int sum=1;
        scanf("%d",&a);
        if(a==0)
            printf("1\n");
        else
        {
            for(i=1;i<=a;i++)
            {
                if(i%2==1)
                    sum=sum*2;
                else
                    sum=sum+1;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
