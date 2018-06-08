#include<stdio.h>
int asif(int p,int q,int *arr);
int main()
{
    int n,a,b,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        scanf("%d %d",&a,&b);
        int arr[a];
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[j]);
        }
        int p,q,min[b],k,l=0;
        for(j=0;j<b;j++)
        {
            scanf("%d %d",&p,&q);
            min[l]=asif(p,q,arr);
            /*min[l]=arr[0];
            for(k=p-1;k<q;k++)
            {
                if(arr[k]<min[l])
                    min[l]=arr[k];
            }*/
            l++;
        }
        printf("Case %d:\n",i);
        for(j=0;j<b;j++)
            printf("%d\n",min[j]);

    }
    return 0;
}
int asif(int p,int q,int *arr)
{
    int min,i;
    min=arr[0];
    for(i=p-1;i<q;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
