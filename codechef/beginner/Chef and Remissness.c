#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            c=a;
        else
            c=b;
        printf("%d %d\n",c,a+b);
    }
    return 0;
}
