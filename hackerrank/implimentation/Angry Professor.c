#include<stdio.h>
int main()
{
    int t,a,b,p,c,i;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d%d",&a,&b);
        for(i=0;i<a;i++)
        {
            scanf("%d",&p);
            if(p<=0)
                c++;
        }
        if(c>=b)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
