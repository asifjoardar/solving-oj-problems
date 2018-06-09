#include<stdio.h>
int main()
{
    int a,i;
    char s[101],s1[101];
    scanf("%s%s",s,s1);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
        if(s1[i]>='A'&&s1[i]<='Z')
            s1[i]=s1[i]+32;
    }
    a=strcmp(s,s1);
    printf("%d\n",a);
    return 0;
}
