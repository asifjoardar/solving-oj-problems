#include<stdio.h>
int main()
{
    int n,i,c=0,c1=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    if(n==1)
        printf("%s\n",s);
    else{
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
            c++;
        else
            c1++;
    }
    if(c1==0)
        printf("0\n");
    else if(c==0)
        printf("1\n");
    else
    {
        printf("1");
        for(i=1;i<=c;i++)
            printf("0");
        printf("\n");
    }
    }
    return 0;
}
