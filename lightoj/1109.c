#include<stdio.h>
int main()
{
    int arr[1001],a1[1001],i,a,j,tem,tem1,num,n;
    for(i=0;i<=1000;i++)
        arr[i]=0;
    for(i=1;i<=1000;i++)
    {
        a=1000/i;
        for(j=1;j<=a;j++)
            arr[i*j]++;
    }
    for(i=1;i<=1000;i++)
        a1[i]=i;
    for(i=1;i<=1000;i++)
    {
        for(j=1;j<=1000;j++){
        if(arr[j]<arr[j+1])
        {
            tem1=a1[j+1];
            a1[j+1]=a1[j];
            a1[j]=tem1;
            tem=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tem;
        }
        }
    }
    for(i=1,j=1000;i<=1000;i++,j--)
        arr[i]=a1[j];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num==1)
            printf("Case %d: %d\n",i,num);
        else
            printf("Case %d: %d\n",i,arr[num]);
    }
    return 0;
}
