#include<stdio.h>
int main()
{
    int i,n;
    char s[51];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        if(strlen(s)==3)
        {
            if(i<n){
            if(s[0]=='U'&&s[1]=='R')
                printf("URI ");
            else if(s[0]=='O'&&s[1]=='B')
                printf("OBI ");
            else
                printf("%s ",s);
            }
            else
            {
                if(s[0]=='U'&&s[1]=='R')
                printf("URI\n");
            else if(s[0]=='O'&&s[1]=='B')
                printf("OBI\n");
            else
                printf("%s\n",s);
            }
        }
        else{
                if(i<n)
            printf("%s ",s);
            else
               printf("%s\n",s);
        }
    }
    return 0;
}
