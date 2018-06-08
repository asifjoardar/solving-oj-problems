
#include<stdio.h>
int main()
{
    int i;
    double sum=0.00;
    for(i=1;i<=100;i++)
    {
        sum=sum+(1/(double)i);
    }
    printf("%.2lf\n",sum);
    return 0;
}
