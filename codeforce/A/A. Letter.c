#include<stdio.h>
int main()
{
    int a,b,i,j,p,q,s=-1,t=-1;
    scanf("%d%d",&a,&b);
    char str[a][b];
    p=a;q=b;
    for(i=0;i<a;i++)
    {
            scanf("%s",&str[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(str[i][j]=='*')
            {
                if(i<p) p=i;
                if(i>s) s=i;
                if(j<q) q=j;
                if(j>t) t=j;
            }
        }
    }
    for(i=p;i<=s;i++)
    {
        for(j=q;j<=t;j++)
            printf("%c",str[i][j]);
        printf("\n");
    }
    return 0;
}
