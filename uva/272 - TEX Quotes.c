#include<stdio.h>
int main()
{
    int i;
    int count=0;
    char s[100001];
    while(gets(s))
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='"'&&count%2==0){
                printf("``");
                count++;
            }
            else if(s[i]=='"'&&count%2==1){
                printf("''");
                count++;
            }
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
