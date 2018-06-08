#include<stdio.h>
int main()
{
    int i,t,a,b,c,j,mid;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
            int r=(b+c-1)%a;
            if(r==0)
                printf("%d\n",a);
            else
                printf("%d\n",r);
    }
    return 0;
}
