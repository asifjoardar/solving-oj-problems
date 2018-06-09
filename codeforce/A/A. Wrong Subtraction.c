#include<stdio.h>
int main()
{
    int b,i,j,x;
    char s[20];
    scanf("%s%d",&s,&b);
    x=strlen(s);
    i=x-1;
    for(;;)
    {
        if(b==0)
            break;
        if(s[i]=='0')
        i--;
        else
        {
            s[i]=s[i]-1;
        }
        b--;
    }
    for(j=0;j<=i;j++)
        printf("%c",s[j]);
    printf("\n");
    return 0;
}
