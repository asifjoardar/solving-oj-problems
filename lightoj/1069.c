#include<stdio.h>
int main()
{
    int n,a,b,as,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<b)
        {
            as=(b*4)+19;
        }
        else if(a>b)
        {
            as=((a-b)*4)+(a*4)+19;
        }
        else
        {
            as=(a*4)+19;
        }
        printf("Case %d: %d\n",i,as);
    }
    return 0;
}
