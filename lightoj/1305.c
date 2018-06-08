/*#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,ax,ay,bx,by,cx,cy,dx,dy,area,A,B,C,D;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy);
        dx=cx-bx+ax;
        dy=cy-by+ay;
        A=(ax*by)-(ay*bx);B=(bx*cy)-(by*cx);
        C=(cx*dy)-(dx*cy);D=(dx*ay)-(dy*ax);
        area=(A+B+C+D)/2;
        printf("Case %d: %d %d %d\n",i,dx,dy,abs(area));
    }
    return 0;
}*/

#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,c1=1;
    int ax,ay,bx,by,cx,cy,dx,dy,ox,oy,a,b,c,d,e;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy);
        /*ox=(ax+cx)/2;
        oy=(ay+cy)/2;
        dx=(2*ox)-bx;
        dy=(2*oy)-by;*/
        a=(ax*by)-(ay*bx);b=(bx*cy)-(by*cx);
        c=(cx*dy)-(dx*cy);d=(dx*ay)-(dy*ax);
        e=(a+b+c+d)/2;
        printf("Case %d: %d %d %d\n",c1,dx,dy,abs(e));
        c1++;
    }
    return 0;
}
