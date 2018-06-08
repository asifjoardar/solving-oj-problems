#include<stdio.h>
int main()
{
    int sum,i;
    char s[11];
    scanf("%s",s);
    if(s[8]=='P')
    {
        sum=((s[0]-48)*10)+(s[1]-48);
        if(sum<12){
        sum=sum+12;
        //printf("%d",sum);
        printf("%d",sum);
        for(i=2;i<=7;i++)
            printf("%c",s[i]);
        printf("\n");}
        else
        {
            for(i=0;i<=7;i++)
            printf("%c",s[i]);
        printf("\n");
        }
    }
    else
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            s[0]='0';s[1]='0';
        }
        for(i=0;i<=7;i++)
            printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}
