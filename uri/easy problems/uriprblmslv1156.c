#include<stdio.h>
int main()
{
    double s=0.00,b=1.00,i;
    for(i=1;i<=39;i=i+2.00)
    {
        s=s+(i/b);
        b=b*2;
    }

    printf("%.2lf\n",s);
    return 0;
}
