#include<stdio.h>
int main()
{
    int no,count;
    double n,sum;
    for( ; ; )
    {
        sum=0.0;
        count=0;
    while(count<2)
    {
        scanf("%lf",&n);
            if(n>0&&n<=10)
            {
                sum=sum+n;
                count++;
            }
            else
                printf("nota invalida\n");
        }
    printf("media = %.2lf\n",sum/2);
    asif:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&no);
    if(no==1)
        continue;
    else if(no==2)
        break;
        else
            goto asif;

    }
    return 0;
}
