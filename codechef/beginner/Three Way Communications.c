#include<stdio.h>
#include<math.h>
int main()
{
    int t,r,d1,d2,d3,x1,x2,x3,y1,y2,y3;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&r);
        scanf("%d%d",&x1,&y1);
        scanf("%d%d",&x2,&y2);
        scanf("%d%d",&x3,&y3);
        d1=pow((x1-x2),2)+pow((y1-y2),2);
        d2=pow((x2-x3),2)+pow((y2-y3),2);
        d3=pow((x3-x1),2)+pow((y3-y1),2);
        r=r*r;
        if((d1<=r)&&(d2<=r)||(d2<=r)&&(d3<=r)||(d3<=r)&&(d1<=r))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
