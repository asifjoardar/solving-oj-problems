#include<stdio.h>
int main()
{
    int count=0,i,j,n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            {
                if((a[i]+a[j])%m==0)
                    count++;
            }
    }
    printf("%d\n",count);
    return 0;
}

