#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    int i,count=0,a;
    char ch[101];
    scanf("%s",ch);
    for(i=1;ch[i]!='\0';i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z')
        {
            count++;
        }
    }
    a=strlen(ch);
    if(count==a-1)
    {
     for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z')
        {
            ch[i]=tolower(ch[i]);

        }
        else
        {
            ch[i]=toupper(ch[i]);
        }
    }
    }
    printf("%s\n",ch);
   return 0;
}
