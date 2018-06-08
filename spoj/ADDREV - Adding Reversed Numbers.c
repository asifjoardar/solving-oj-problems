#include<stdio.h>
int main()
{
    int i,n,p,q,x,e,f,g,s,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        e=f=g=0;
        scanf("%d%d",&a,&b);
        while(a!=0)
        {
            s=a%10;
            e=e*10+s;
            a/=10;
        }
        while(b!=0)
        {
            s=b%10;
            g=g*10+s;
            b/=10;
        }
        x=e+g;
        while(x!=0)
    {
        s=x%10;
        f=f*10+s;
        x/=10;
    }
    printf("%d\n",f);
    }
    return 0;
}
