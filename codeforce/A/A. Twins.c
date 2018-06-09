#include<stdio.h>
int main()
{
    int i,j,n,tem,sum=0,sum1=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    for(i=0;i<n;i++)
        sum=sum+a[i];
    for(i=0;i<n;i++)
    {
        sum1+=a[i];
        sum=sum-a[i];
        if(sum1<=sum)
            count++;
        else
        {
            count++;
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}
