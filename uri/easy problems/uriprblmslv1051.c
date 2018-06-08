#include<stdio.h>
int main()
{
    double  a,b;
    scanf("%lf",&a);
    if(a>=0.00&&a<=2000.00)
        {
            printf("Isento\n");
            return 0;
        }
    else if(a>2000.00&&a<=3000.00)
    {
        a=a-2000.00;
        b=a*.08;
    }
    else if(a>3000.00&&a<=4500.00)
    {
        a=a-3000.0;
        b=(a*0.18)+(1000*.08);
    }
    else if(a>4500.00)
    {
        a=a-4500.00;
        b=(a*0.28)+(1500*.18)+(1000*.08);
    }
    printf("R$ %.2lf\n",b);
    return 0;
}
