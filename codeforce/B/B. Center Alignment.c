#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,c=0,j,max,a,x,y,p,tem,count=0;
    char s[1000][1000];
    while(gets(s[i]))
    {
        i++;
        c++;
    }
    max=strlen(s[0]);
    for(i=1;i<c;i++)
    {
        if(strlen(s[i])>max)
            max=strlen(s[i]);
    }
    for(i=0;i<max+2;i++)
        printf("*");
    printf("\n");
    for(i=0;i<c;i++)
    {
        a=strlen(s[i]);
        if(a==max)
            printf("*%s*\n",s[i]);
        else
        {
            p=max-a;
            x=p/2;
            y=p-x;
            if(p%2!=0)
            {
                if(count%2==0){
                    x=p/2;
                    y=(p/2)+1;
                    count=1;
                }
                else
                {
                    y=p/2;
                    x=(p/2)+1;
                    count=0;
                }
            }
            printf("*");
            for(j=0;j<x;j++)
                printf(" ");
            printf("%s",s[i]);
            for(j=0;j<y;j++)
                printf(" ");
            printf("*\n");
        }

    }
    for(i=0;i<max+2;i++)
        printf("*");
    printf("\n");
    return 0;
}

