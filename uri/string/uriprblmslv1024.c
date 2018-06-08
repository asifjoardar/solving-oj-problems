#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a,n,p,k;
    char s[1001],s1[1001];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(s);
        a=strlen(s);
        for(j=0;j<a;j++)
        {
            if(s[j]>='A'&&s[j]<='Z' )
                    s[j]=s[j]+3;
            else if (s[j]>='a'&&s[j]<='z' )
                    s[j]=s[j]+3;
        }
        for(j=0,k=a-1;k>=0;k--,j++)
            s1[j]=s[k];
        s1[a]='\0';
        p=a/2;
        for(j=p;j<a;j++)
            {
                    s1[j]=s1[j]-1;
            }
        for(j=0;j<a;j++)
            printf("%c",s1[j]);
        printf("\n");
    }
    return 0;
}
