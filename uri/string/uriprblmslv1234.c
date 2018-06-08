/*#include<stdio.h>
#include<string.h>
int main()
{
    int i,p;
    char s[51];
    while(gets(s)!=NULL)
    {
            int n=0;
            for(i=0;s[i]!='\0';i++)
            {
                if(s[i]!=' ')
                {
                    n++;
                    if(n%2==1)
                    {
                        if(s[i]>='a'&&s[i]<='z')
                            printf("%c",s[i]-32);
                        else
                            printf("%c",s[i]);
                    }
                    else
                    {
                        if(s[i]>='A'&&s[i]<='Z')
                            printf("%c",s[i]+32);
                        else
                            printf("%c",s[i]);
                    }
                }
                else
                    printf("%c",s[i]);
            }
            printf("\n");
    }
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,p;
    char s[51];
    while(gets(s)!=NULL)
    {
        //getchar();
        if(strlen(s)==1)
        {
            if(s[0]>='A'&&s[0]<='Z')
                printf("%s\n",s);
            else if(s[0]>='a'&&s[0]<='z')
                printf("%c\n",s[0]-32);
            break;
        }
        else
        {
            int p=0;
            for(i=0;s[i]!='\0';i++)
            {
                if((s[i]>='a'&&s[i]<='z')&&p==0)
                    {
                        printf("%c",s[i]-32);
                        p=1;
                    }
                else if(s[i]>='A'&&s[i]<='Z'&&p==0)
                {
                    printf("%c",s[i]);
                    p=1;
                }
                else if(s[i]>='A'&&s[i]<='Z'&&p==1)
                {
                    printf("%c",s[i]+32);
                    p=0;
                }
                else if((s[i]>='a'&&s[i]<='z')&&p==1)
                    {
                        printf("%c",s[i]);
                        p=0;
                    }
                else
                    printf("%c",s[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
