#include<stdio.h>
int main()
{
    int t,n,p,q,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int count=0,sum=0;
        scanf("%d %d %d",&n,&p,&q);
        int e[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&e[j]);
        }
        if(n>p)
        {
            for(j=0;j<p;j++)
            {
                if(e[j]<=q&&sum<=q){
                    sum=sum+e[j];
                    if(sum<=q)
                        count++;
                    }
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                if(e[j]<=q&&sum<=q)
                {
                    sum=sum+e[j];
                    if(sum<=q)
                        count++;
                }
            }
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
