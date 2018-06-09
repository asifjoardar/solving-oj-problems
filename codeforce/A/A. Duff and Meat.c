#include<stdio.h>
int main()
{
    int i,sum=0,min=101,t;
    scanf("%d",&t);
    int a[t+1],b[t+1];
    for(i=1;i<=t;i++)
        scanf("%d%d",&a[i],&b[i]);
    if(t==1)
        printf("%d\n",a[1]*b[1]);
    else
    {
        for(i=1;i<=t;i++)
        {
            if(b[i]<min)
                min=b[i];
            sum=sum+(a[i]*min);
        }
        printf("%d\n",sum);
    }
    return 0;
}
