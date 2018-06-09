#include<stdio.h>
int main()
{
    int a,o=0,p=0,i;
    char s[101];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='o')
            o++;
        else
            p++;
    }
    if(o==0)
    {
        printf("YES\n");
        return 0;
    }
    if(p%o==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
