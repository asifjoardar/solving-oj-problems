#include<stdio.h>
int main()
{
    int i,j,n,x,n1,e;
    scanf("%d",&n);
    int b[n];
    scanf("%d",&b[0]);
    int k=1,l=1;
    for(i=1;i<n;i++)
    {
        scanf("%d",&e);
        if(e!=b[l-1])
        {
            b[k++]=e;
            l=k;
        }
    }
    scanf("%d",&n1);
    int d[n1],a[n1];
    l=0;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&d[i]);
    }
    for(i=n1-1;i>=0;i--)
    {
        int x=1;
        for(j=0;j<k;j++)
        {
            if(d[i]>=b[j])
            {
                a[l++]=j+1;
                x=0;
                break;
            }
        }
        if(x==1)
            a[l++]=k+1;
    }
    for(i=n1-1;i>=0;i--)
        printf("%d\n",a[i]);
    return 0;
}
