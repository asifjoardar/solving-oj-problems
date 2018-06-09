#include<stdio.h>
int main()
{
    int a,b,p,z=0,x;
    scanf("%d%d",&a,&b);
    x=a/2;
    while(x>0)
    {
        p=(a-(x*2));
        p=x+p;
        if(p%b==0)
        {
            z=1;
            break;
        }
        else
            x--;
    }
    if(a%b==0&&z==0)
    {
        z=1;
        p=a;
    }
    if(z==1)
        printf("%d\n",p);
    else
        printf("-1\n");
    return 0;
}
