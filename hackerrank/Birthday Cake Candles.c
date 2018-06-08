#include<stdio.h>
int main()
{
    int n,i,count=0,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(max==a[i])
            count++;
    }
    printf("%d\n",count);
    return 0;
}

