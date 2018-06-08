#include<stdio.h>
int main()
{
    int n,num,i,j,k,m,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        int a[num],b[num],c[num];
        for(j=0;j<num;j++)
        {
            scanf("%d %d %d",&a[j],&b[j],&c[j]);
        }
        for(j=1;j<=3;j++)
        {
            m=0;
            p=1;
            for(k=0;k<num;k++)
            {
                if(b[k]==j)
                {
                    if(c[k]>m||c[k]==m&&a[k]<p)
                    {
                        m=c[k];
                        p=a[k];
                    }
                }
            }
            printf("%d %d\n",m,p);
        }
    }
    return 0;
}
