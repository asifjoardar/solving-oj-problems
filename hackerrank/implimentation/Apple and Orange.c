#include<stdio.h>
int main()
{
    int i,s,t,a,b,m,n,p,count=0,count1=0,x;
    scanf("%d%d",&s,&t);
    scanf("%d%d",&a,&b);
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&p);
        x=p+a;
        if(x>=s&&x<=t)
            count++;
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
        x=p+b;
        if(x>=s&&x<=t)
            count1++;
    }
    printf("%d\n%d\n",count,count1);
    return 0;
}
