#include<stdio.h>
int main()
{
    int n,a,d,i,count=0;
    scanf("%d %d",&n,&d);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%d==0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
