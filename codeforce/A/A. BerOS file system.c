#include<stdio.h>
int main()
{
    int i,x,j=0;
    char s[101];
    scanf("%s",s);
    x=strlen(s);
    for(i=0;i<x;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            j++;
    }
    printf("/");
    for(i=0;i<x;i++)
    {
        if(s[i]>='a'&&s[i]<='z'){
            printf("%c",s[i]);
            j--;
        }
        if((s[i]>='a'&&s[i]<='z')&&s[i+1]=='/'&&j!=0)
            printf("/");
    }
    printf("\n");
    return 0;
}
