#include<stdio.h>
int main()
{
    int a,b,c,i;
    char s[11];
    while(scanf("%d%d",&a,&b))
    {
        if(a==0&&b==0)
            break;
        else
        {
            c=a+b;
            sprintf(s,"%d",c);
            for(i=0;s[i]!='\0';i++)
            {
                if(s[i]!='0')
                    printf("%c",s[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
