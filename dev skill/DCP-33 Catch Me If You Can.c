#include<stdio.h>
int main()
{
    int n,i,v,v1,t,t1,d,d1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&v,&v1,&d,&t);
        if(d==0&&t==0)
            printf("Case %d: Abir will survive\n",i);
        else if(d==0)
            printf("Case %d: Abir will be arrested\n",i);
        else{
        d1=v1*t;
        d=d+d1;
        double t1=d*1.0/v*1.0;
        if(t1<t*1.0)
            printf("Case %d: Abir will be arrested\n",i);
        else if(t1>=t*1.0)
            printf("Case %d: Abir will survive\n",i);
        }
    }
    return 0;
}
