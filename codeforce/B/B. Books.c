#include<stdio.h>
int main()
{
    int n,t,i,j=0,sum=0,count=0;
    scanf("%d%d",&n,&t);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        while(j<n && a[j]+sum<=t)
        {
            sum=sum+a[j];
            j++;
        }
        if(j-i>count)
            count=j-i;
        sum=sum-a[i];
    }
    printf("%d\n",count);
    return 0;
}
