#include<stdio.h>
int main()
{
    int a,b,n,i,j;
    char s[101];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(s);
        a=strlen(s);
        b=a/2;
        for(j=b-1;j>=0;j--)
            printf("%c",s[j]);
        for(j=a-1;j>b-1;j--)
            printf("%c",s[j]);
        printf("\n");
    }
    return 0;
}
