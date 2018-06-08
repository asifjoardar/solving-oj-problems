#include<stdio.h>
int main()
{
    int n,p,i,j,c,d;
    scanf("%d%d",&n,&p);
    if(p==1 || p==n) printf("0\n");
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i==p)
                break;
        }
        c=i/2;
        for(i=n,j=1;i>=1;i--,j++)
        {
            if(i==p)
                break;
        }
        d=j/2;
        if(n%2==1&&p%2==0) d=d-1;
        if(c>d)
            printf("%d\n",d);
        else
            printf("%d\n",c);
    }
    return 0;
}
