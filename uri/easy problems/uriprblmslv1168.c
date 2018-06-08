#include<stdio.h>
int main()
{
    int n,i,j;
    char ch[500];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int sum=0;
        scanf("%s",ch);
        for(j=0;ch[j]!='\0';j++)
        {
            if(ch[j]=='1')
                sum=sum+2;
            else if(ch[j]=='2')
                sum=sum+5;
            else if(ch[j]=='3')
                sum=sum+5;
            else if(ch[j]=='4')
                sum=sum+4;
            else if(ch[j]=='5')
                sum=sum+5;
            else if(ch[j]=='6')
                sum=sum+6;
            else if(ch[j]=='7')
                sum=sum+3;
            else if(ch[j]=='8')
                sum=sum+7;
            else if(ch[j]=='9')
                sum=sum+6;
            else if(ch[j]=='0')
                sum=sum+6;
        }
        printf("%d leds\n",sum);
    }
    return 0;
}
