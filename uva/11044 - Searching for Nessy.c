#include <stdio.h>
int main()
{
    int a,b,t,i,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        x=a/3;
        y=b/3;
        printf("%d\n",x*y);
    }
    return 0;
}
