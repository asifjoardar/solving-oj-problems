#include<stdio.h>
int main()
{
    int count=0,i,n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            count++;
    }
    printf("%d\n",count);
    return 0;
}
