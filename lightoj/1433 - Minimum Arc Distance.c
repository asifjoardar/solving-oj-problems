#include<stdio.h>
int main()
{
    int ox,oy,ax,ay,bx,by,n,i;
    double r,d,fr,f,fr1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d %d",&ox,&oy,&ax,&ay,&bx,&by);
        r=sqrt(pow(ox-ax,2)+pow(oy-ay,2));
        d=sqrt(pow(ax-bx,2)+pow(ay-by,2));
        fr=(2*r*r-d*d)/(2*r*r);
        f=acos(fr);
        fr1=r*f;
        printf("Case %d: %lf\n",i,fr1);
    }
    return 0;
}
