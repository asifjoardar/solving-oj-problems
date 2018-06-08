#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j,k,n,p;
    char s[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
            printf("%d",j);
        for(j=b;j>=a;j--)
        {
            sprintf(s,"%d",j);
            p=strlen(s);
            for(k=p-1;k>=0;k--)
            printf("%c",s[k]);
        }
        printf("\n");
    }
    return 0;
}
