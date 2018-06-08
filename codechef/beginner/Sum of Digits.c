#include<stdio.h>
int main()
{
    int sum,i,n,j;
    char s[10];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    sum=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        sum=sum+(s[i]-48);
    }
    printf("%d\n",sum);
    }
    return 0;
}
