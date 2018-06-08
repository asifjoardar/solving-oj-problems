#include<stdio.h>
int main()
{
    int i,j,c,n;
    char s[15];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        scanf("%s",s);
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]=='4')
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}

