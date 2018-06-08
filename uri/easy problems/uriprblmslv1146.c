#include<stdio.h>
int main()
{
    int a,i;
    for( ; ; )
    {
        scanf("%d",&a);
        if(a==0)
            break;
            else{
        for(i=1;i<=a;i++)
        {
            printf("%d",i);
            if(i==a)
                break;
            printf(" ");
        }
        printf("\n");}
    }
    return 0;
}
