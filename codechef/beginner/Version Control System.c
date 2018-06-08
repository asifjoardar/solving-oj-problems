#include<stdio.h>
int main()
{
    int t,n,n1,n2,i,count,count1;
    scanf("%d",&t);
    while(t--)
    {
        count=0;count1=0;
        scanf("%d%d%d",&n,&n1,&n2);
        int a[n1],b[n2],d[n+1];
        for(i=0;i<=n;i++) d[i]=0;
        for(i=0;i<n1;i++)
        {
            scanf("%d",&a[i]);
            d[a[i]]++;
        }
        for(i=0;i<n2;i++)
        {
            scanf("%d",&b[i]);
            d[b[i]]++;
        }
        for(i=1;i<=n;i++)
        {
            if(d[i]==0) count++;
            if(d[i]==2) count1++;
        }
        printf("%d %d\n",count1,count);
    }
    return 0;
}
