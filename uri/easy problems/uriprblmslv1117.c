#include<stdio.h>
int main()
{
    int b=0;
    double a,sum=0.0;
    for( ; ; )
    {
        if(b==2)
            break;
        scanf("%lf",&a);
        if(a>=0&&a<=10)
        {
            b++;
            sum=sum+a;
        }
        else
            printf("nota invalida\n");
    }
    printf("media = %.2lf\n",sum/2.00);
    return 0;
}
