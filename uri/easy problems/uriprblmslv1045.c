#include<stdio.h>
int main()
{
    double a,b,c,tem;
    scanf("%lf %lf %lf",&a,&b,&c);

    if( b>a && b>=c )
        {
            tem=b;
            b=a;
            a=tem;
        }
    if( c>a && c>=b )
        {
            tem=c;
            c=a;
            a=tem;
        }

    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a==b*b+c*c)
    {
        printf("TRIANGULO RETANGULO\n");
    }

    else if(a*a>b*b+c*c)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if(a*a<b*b+c*c)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }



    if (a==b&&b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a==b||b==c||c==a)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;

}
