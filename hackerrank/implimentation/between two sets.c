#include<stdio.h>
int asif(int i,int a[],int n)
{
    int j,p=0;
    for(j=0;j<n;j++)
    {
        if(i%a[j]!=0)
        {
            p=1;
            break;
        }
    }
    return p;
}
int main()
{
    int i,j,x,n,n1,p,count=0;
    scanf("%d%d",&n,&n1);
    int a[n],b[n1];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n1;i++)
        scanf("%d",&b[i]);
    for(i=1;i<=100;i++)
    {
        x=asif(i,a,n);
        if(x==0)
        {
            p=0;
            for(j=0;j<n1;j++)
            {
                if(b[j]%i!=0)
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
