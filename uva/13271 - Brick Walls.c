#include<stdio.h>
int main()
{
    int ax,ay,bx,by,a,b;
    while(scanf("%d %d %d %d",&ax,&ay,&bx,&by))
    {
        if(ax==0&&ay==0&&bx==0&&by==0)
            break;
        a=abs(ax-bx);
        b=abs(ay-by);
        if(a<=5)
        printf("%d\n",a+b);
        else
        printf("%d\n",(a+b)+(a-b));
    }
    return 0;
}
