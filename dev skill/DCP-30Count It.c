#include<stdio.h>
int main()
{
    int i,n,j,ch[26];
    char s[100];
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=0;i<26;i++)
            ch[i]=0;
        scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            ch[s[i]-97]++;
    }
    printf("Case %d:\n",j);
    for(i=0;i<26;i++)
    {
        if(ch[i]!=0)
            printf("%c %d\n",(i+97),ch[i]);
    }
    }
    return 0;
}
