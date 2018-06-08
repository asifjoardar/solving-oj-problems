#include<stdio.h>
int main()
{
    int n,t,i,tem,j;
    scanf("%d%d",&n,&t);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=t;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<t;i++)
        printf("%d ",a[i]);
        printf("\n");
    return 0;
}
