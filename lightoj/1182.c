#include<stdio.h>
int main()
{
    int n,i,a,count;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        scanf("%d",&a);
        while(a>=1)
        {
            if(a%2!=0)
                count++;
            a=a/2;
        }
        if(count%2!=0)
            printf("Case %d: odd\n",i);
        else
            printf("Case %d: even\n",i);
    }
    return 0;
}
