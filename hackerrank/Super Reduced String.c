#include<stdio.h>
#include<string.h>
int main()
{
    int p=0,i,j=0;
    char s[101],c[101];
    scanf("%s",s);
    c[0]=s[0];
    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]!=s[i+1]&&s[i]!=c[j]){
            c[j++]=s[i];
            p=1;
        }
    }
    if(p==0)
        printf("Empty String");
    else
        printf("%s",c);
    printf("\n");
    return 0;
}
