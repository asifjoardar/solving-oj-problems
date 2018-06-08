#include<stdio.h>
int main()
{
    int a;
    double b,c;
    scanf("%d %lf",&a,&b);
    if(a%5==0&&a<=b)
    {
        c=b-a;
        c=c-.50;
        if(c<0)
            printf("%.2lf\n",b);
        else
        printf("%.2lf\n",c);
    }
    else
        printf("%.2lf\n",b);
    return 0;
}
