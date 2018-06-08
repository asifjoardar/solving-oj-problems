#include<stdio.h>
int main()
{
    int i,a,b,sum=100;
    scanf("%d%d",&a,&b);
    int n[a];
    for(i=0;i<a;i++)
        scanf("%d",&n[i]);
    for(i=0;i<a;i+=b)
    {
        if(n[i]==0)
            sum-=1;
        else
            sum-=3;
    }
    printf("%d\n",sum);
    return 0;
}
