#include<stdio.h>
#include<string.h>
int main()
{
    int n,n1,i,j,count=0;
    scanf("%d",&n);
    char s[n][30],ch[30];
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%s",ch);
        count=0;
        for(j=0;j<n;j++)
        {
            if(strcmp(ch,s[j])==0)
                count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
