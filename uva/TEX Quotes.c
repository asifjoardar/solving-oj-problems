#include<stdio.h>
int main()
{
    long long int i,count=0,l;
    char s[100001];
    while(gets(s)!=EOF)
    {
        for(i=0;s[i]!='\0';i++)
            {
            if(s[i]=='"')
                {
                count++;
                if(count%2==1)
                    printf("``");
                else
                    printf("''");
                }
            else
                printf("%c",s[i]);
            }
            printf("\n");
    }
    return 0;
}
