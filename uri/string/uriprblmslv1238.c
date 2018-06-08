#include<stdio.h>
int main()
{
    int i,j,k,n;
    char s[51],s1[51];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=0;
        scanf("%s%s",s,s1);
        while(1)
        {
            if(s[j]!='\0'&&s1[j]!='\0')
                printf("%c%c",s[j],s1[j]);
            else if(s[j]=='\0')
            {
                for(k=j;s1[k]!='\0';k++)
                    printf("%c",s1[k]);
                printf("\n");
                break;
            }
            else if(s1[j]=='\0')
            {
                for(k=j;s[k]!='\0';k++)
                    printf("%c",s[k]);
                printf("\n");
                break;
            }
            j++;
        }
    }
    return 0;
}
