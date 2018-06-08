#include<stdio.h>
int main()
{
    int i,j,t,n,p,k,z,tem;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n+1];
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        scanf("%d",&p);
        z=a[p-1];
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]>a[k])
                {
                    tem=a[j];
                    a[j]=a[k];
                    a[k]=tem;
                }
            }
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==z)
            {
                printf("%d\n",j+1);
                break;
            }
        }
    }
    return 0;
}
