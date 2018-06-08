#include<stdio.h>
int main()
{
    int num,n,p,q,i,j,k,m,d,tem,y,z,l;
    char ch[2];
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        scanf("%d %d",&n,&m);
        int a[n];
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(l=1;l<=m;l++)
        {
            scanf("%s",&ch);
            if(ch[0]=='S')
            {
                scanf("%d",&d);
                for(k=0;k<n;k++)
                    a[k]=a[k]+d;
            }
            else if(ch[0]=='M')
            {
                scanf("%d",&d);
                for(k=0;k<n;k++)
                    a[k]=a[k]*d;
            }
            else if(ch[0]=='D')
            {
                scanf("%d",&d);
                for(k=0;k<n;k++)
                    a[k]=a[k]/d;
            }
            else if(ch[0]=='R')
            {
                p=n-1;
                q=0;
                for(;q<p;k)
                {
                    tem=a[q];
                    a[q]=a[p];
                    a[p]=tem;
                    p--;
                    q++;
                }
            }
            else if(ch[0]=='P')
            {
                scanf("%d %d",&y,&z);
                tem=a[y];
                a[y]=a[z];
                a[z]=tem;
            }
        }
        printf("Case %d:\n",i);
        for(j=0;j<n;j++)
            {
                if(j==n-1)
                    printf("%d\n",a[j]);
                else
                    printf("%d ",a[j]);
            }
    }
    return 0;
}
