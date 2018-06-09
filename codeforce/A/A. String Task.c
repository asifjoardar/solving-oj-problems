#include<stdio.h>
int main()
{
    int i,j;
    char s[101];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            for(j=i;s[j]!='\0';j++){
                s[j]=s[j+1];
            }
            i--;
        }
    }
    for(i=0;s[i]!='\0';i++)
        printf(".%c",s[i]);
    printf("\n");
    return 0;
}
