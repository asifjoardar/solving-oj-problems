#include <stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='U')
        {
            if(s[i+1]=='R')
            {
                count++;
                i++;
            }
            else
                count++;
        }
        else if(s[i]=='R')
        {
            if(s[i+1]=='U')
            {
                count++;
                i++;
            }
            else
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
