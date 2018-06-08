/*#include<stdio.h>
int main()
{
    int a,b,n,c,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        c=a%b;
        printf("%d\n",c);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,j,k,count,a,b,n;
    char s[201];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        count=0;
        scanf("%d",&b);
        getchar();
        for(j=1;j<=b;j++)
        {
            gets(s);
            for(k=0;s[k]!='\0';k++)
            {
                if(s[k]==' ')
                    count++;
            }
        }
        a=count+(b-1);
        printf("%d\n",a);
    }
    return 0;
}
