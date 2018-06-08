#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,ax,ay,bx,by;
    double d,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %lf %d %d",&ax,&ay,&r,&bx,&by);
        d=sqrt(pow((ax-bx),2)+pow((ay-by),2));
        if(d>r)
            printf("Case %d: Outside\n",i);
        else if(d<r)
            printf("Case %d: Inside\n",i);
        else
            printf("Case %d: OnCircle\n",i);
    }
    return 0;
}
