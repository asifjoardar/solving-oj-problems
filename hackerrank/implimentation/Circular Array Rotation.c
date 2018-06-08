#include<stdio.h>
int main()
{
    int i,j,n,t,r,x;
    scanf("%d%d%d",&n,&r,&t);
    int a[n],c[n],b[t];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++)
        scanf("%d",&b[i]);
    if(r>n)
        r=r%n;
    x=n-r;
    for(i=x,j=0;i<n;i++,j++)
        c[j]=a[i];
    for(i=0;i<x;i++,j++)
        c[j]=a[i];
    for(i=0;i<t;i++)
    printf("%d\n",c[b[i]]);
    return 0;
}
