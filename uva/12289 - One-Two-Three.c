#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,t;
    char s[6];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         scanf("%s",s);
         a=strlen(s);
         if(a==5)
         {
                printf("3\n");
         }
         if(a==3)
         {
             if((s[0]=='o'&&s[1]=='n')||(s[2]=='e'&&s[0]=='o')||(s[1]=='n'&&s[2]=='e'))
                printf("1\n");
             else if((s[0]=='t'&&s[1]=='w')||(s[0]=='t'&&s[2]=='o')||(s[1]=='w'&&s[2]=='o'))
                printf("2\n");
         }
    }
    return 0;
}
