/*#include<stdio.h>
int main()
{
    int n,x1,x2,y1,y2,cp,cp1,t,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&t);
        printf("Case %d:\n",i);
        for(j=1;j<=t;j++)
        {
            scanf("%d %d",&cp,&cp1);
            if(x1<cp&&y1<cp1&&x2>cp&&y2>cp1)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int x,y,x1,x2,y1,y2,i,j,t,c,n=1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&c);
        printf("Case %d:\n",n);
        for(j=1;j<=c;j++)
        {
            scanf("%d%d",&x,&y);
            if((x>x1 && x<x2) && (y>y1 && y<y2))
                printf("Yes\n");
            else
                printf("No\n");
        }
        n++;
    }
    return 0;
}
