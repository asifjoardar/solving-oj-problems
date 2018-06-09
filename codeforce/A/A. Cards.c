#include<stdio.h>
int main()
{
    int i,j,sum=0,p,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    p=sum/(n/2);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==p)
            {
                a[i]=a[j]=0;
                printf("%d %d\n",i+1,j+1);
            }
        }
    }
    return 0;
}
