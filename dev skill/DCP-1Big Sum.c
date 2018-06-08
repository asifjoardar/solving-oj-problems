#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,a1,b1,c1;
    char a[100],b[100],c[100];
    while(scanf("%s %s",a,b)!=EOF)
    {
        strrev(a);
        strrev(b);
        a1=atoi(a);
        b1=atoi(b);
        c1=a1+b1;
        itoa(c1,c,10);
        strrev(c);
        if(c[0]=='0'){
        for(i=1;i<c[i]!='\0';i++)
        {
            printf("%c",c[i]);
        }for(i=1;i<c[i]!='\0';i++)
        {
            printf("%c",c[i]);
        }
        }
        else
        {
            for(i=0;i<c[i]!='\0';i++)
        {
            printf("%c",c[i]);
        }
        }
        printf("\n");
    }
    return 0;
}
