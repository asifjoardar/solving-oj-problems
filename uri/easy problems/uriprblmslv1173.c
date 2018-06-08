#include<stdio.h>
int main()
{
    int a[10],i,n;
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        a[i]=n;
        n=n*2;
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}
