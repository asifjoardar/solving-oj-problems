#include <stdio.h>
int main()
{
    int count=0,count1=0,i;
    int a[3],b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            count++;
        else if(a[i]<b[i])
            count1++;
    }
    printf("%d %d\n",count,count1);
    return 0;
}
