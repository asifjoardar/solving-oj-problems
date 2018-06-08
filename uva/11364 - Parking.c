#include<stdio.h>
int main()
{
    int i,b,a[100],c,d,n,n1,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
            b=a[0];
    for(i=0;i<n1;i++)
    {
        if(b<a[i])
        b=a[i];
    }
        c=a[0];
        for(i=0;i<n1;i++)
    {
    if(c>a[i])
        c=a[i];
    }
    d=(b-c)*2;
    printf("%d\n",d);
    }
    return 0;
}
