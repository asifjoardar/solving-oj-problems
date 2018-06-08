#include<stdio.h>
int main()
{
    int a[6],n,n1,x,x1,y,y1,z,z1,i,j,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a[0]=a[1]=a[2]=1;
        a[3]=a[4]=a[5]=1000;
        scanf("%d",&n1);
        for(j=1;j<=n1;j++)
        {
            scanf("%d %d %d %d %d %d",&x,&y,&z,&x1,&y1,&z1);
            if(a[0]<=x)
            {
                a[0]=x;
            }
            if(a[1]<=y)
            {
                a[1]=y;
            }
            if(a[2]<=z)
            {
                a[2]=z;
            }
            if(a[3]>x1)
            {
                a[3]=x1;
            }
            if(a[4]>y1)
            {
                a[4]=y1;
            }
            if(a[5]>z1)
            {
                a[5]=z1;
            }
        }
        if(a[0]<a[3]&&a[1]<a[4]&&a[2]<a[5])
        {
            sum=(a[3]-a[0])*(a[4]-a[1])*(a[5]-a[2]);
            printf("Case %d: %d\n",i,sum);
        }
        else
            printf("Case %d: 0\n",i);

    }
    return 0;
}
