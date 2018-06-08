#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j,k,n;
    char s[1001],s1[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s",s,s1);
        a=strlen(s);
        b=strlen(s1);
        if(strlen(s)<strlen(s1))
        {
            printf("nao encaixa\n");
        }
        else
        {
            int p=0;
            if(s[a-1]==s1[b-1])
            {
                for(j=a-1,k=b-1;k>=0;j--,k--)
                {
                    if(s[j]!=s1[k]){
                        p=1;
                        break;}
                }
            }
            else
                p=1;
            if(p==0)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }
    return 0;
}
