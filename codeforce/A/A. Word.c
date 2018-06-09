#include<stdio.h>
int main()
{
    char c[101];
    int i,d,a=0,b=0;
    scanf("%s",c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]>='A' && c[i]<='Z') a++;
        else if(c[i]>='a' && c[i]<='z') b++;
    }
        if(a>b)
        {
            for(i=0;c[i]!='\0';i++)
            {
                if(c[i]>='a'&&c[i]<='z') c[i]=c[i]-32;
            }
        }
        else if(a<=b)
        {
            for(i=0;c[i]!='\0';i++)
            {
                if(c[i]>='A'&&c[i]<='Z') c[i]=c[i]+32;
            }
        }
        printf("%s\n",c);
        return 0;
}
