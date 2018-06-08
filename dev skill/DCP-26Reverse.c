#include<stdio.h>
int main()
{
    int i,j,a,n;
    char ch[1000],c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %[^\n]s",ch);
        a=strlen(ch);
        for(j=a-1;j>=0;j--)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
    return 0;
}
