#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c%4==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
