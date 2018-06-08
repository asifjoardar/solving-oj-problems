#include<stdio.h>
int main()
{
    int n=20,i,a[20],b;
    for(i=0;i<20;i++)
    {
        n=n-1;
        scanf("%d",&b);
        a[n]=b;
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}
