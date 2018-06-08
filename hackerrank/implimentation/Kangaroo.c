#include <stdio.h>
int main()
{
    int x1,v1,x2,v2,i;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    if(v2>v1&&x1>x2)
        printf("NO\n");
    else
    {
        int p=0;
        for(i=1;i<=10000;i++)
        {
            x1=x1+v1;
            x2=x2+v2;
            if(x1==x2)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
