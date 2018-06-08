#include<stdio.h>
int main()
{
    int a,n,x,x1,y,y1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&x,&y,&x1,&y1);
        a=abs(x-x1)+abs(y-y1);
        printf("Case %d: %d\n",i,a);
    }
    return 0;
}
