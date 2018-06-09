#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[6][6],i,j,r,x,y;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(a[i][j]==1)
            {
                x=i;y=j;
                break;
            }
        }
    }
    r=abs(3-(x))+abs(3-(y));
    printf("%d\n",r);
    return 0;
}
