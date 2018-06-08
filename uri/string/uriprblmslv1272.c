#include<stdio.h>
int main()
{
    int i,j,n;
    char s[51];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(s);
        if(s[0]>='a'&&s[0]<='z')
            printf("%c",s[0]);
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]==' '&&(s[j+1]>='a'&&s[j+1]<='z'))
                printf("%c",s[j+1]);
        }
        printf("\n");
    }
    return 0;
}
