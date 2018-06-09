#include<stdio.h>
int main()
{
    int n,a,b,c,p,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=0;
        scanf("%d%d%d",&a,&b,&c);
        if(a==1)
        {
            if(b==1||c==1)
                p=1;
        }
        else
        {
            if(b==1&&c==1)
                p=1;
        }
        if(p==1)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
