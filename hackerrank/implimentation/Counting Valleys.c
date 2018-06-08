#include<stdio.h>
int main()
{
    int i,n,c=0,count=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='U')
            c++;
        else if(s[i]=='D')
            c--;
        if(c==0&&s[i]=='U')
            count++;
    }
    printf("%d\n",count);
    return 0;
}
