#include<stdio.h>
int main()
{
    int n,i;
    char s[6];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        if(strlen(s)==3)
        {
            if(s[0]=='o'&&s[1]=='n')
                printf("1\n");
            else if(s[1]=='n'&&s[2]=='e')
                printf("1\n");
            else if(s[0]=='o'&&s[2]=='e')
                printf("1\n");
            else if(s[0]=='t'&&s[1]=='w')
                printf("2\n");
            else if(s[1]=='w'&&s[2]=='o')
                printf("2\n");
            else if(s[0]=='t'&&s[2]=='o')
                printf("2\n");
        }
        else
            printf("3\n");
    }
    return 0;
}
