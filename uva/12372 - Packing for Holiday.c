#include<stdio.h>
int main()
{
    int j=0,n,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        j++;
        scanf("%d%d%d",&a,&b,&c);
        if(a<=20&&b<=20&&c<=20)
            printf("Case %d: good\n",j);
        else
            printf("Case %d: bad\n",j);
    }
    return 0;
}
