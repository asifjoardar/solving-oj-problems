#include<stdio.h>
int main()
{
    int a,b,c,d,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c)
        {
            if(b>c)
                d=b;
            else
                d=c;
        }
        else if(b>a&&b>c)
        {
            if(a>c)
                d=a;
            else
                d=c;
        }
        else if(c>a&&c>b)
        {
            if(a>b)
                d=a;
            else
                d=b;
        }
        printf("%d\n",d);
    }
    return 0;
}
