#include<stdio.h>
int main()
{
    int i,n,sum=0,sum1=0,count=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum%2==1)
        printf("0\n");
    else
    {
        for(i=0;i<n-1;i++)
        {
            sum1+=a[i];
            if(sum1*2==sum)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
