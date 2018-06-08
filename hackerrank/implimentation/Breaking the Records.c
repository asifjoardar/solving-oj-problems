#include <stdio.h>
int main()
{
    int n,i,max,min,count=0,count1=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            count++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            count1++;
        }
    }
    printf("%d %d\n",count,count1);
    return 0;
}

