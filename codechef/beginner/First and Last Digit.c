#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,n,i;
    char s[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        a=strlen(s);
        b=(s[0]-48)+(s[a-1]-48);
        printf("%d\n",b);
    }
    return 0;
}
