#include<stdio.h>
int main()
{
    int a,i,m,n;
    char ch[201];
    while(scanf("%d",&a))
    {
        if(a==0)
            break;
        scanf("%s",ch);
        n=strlen(ch);
        //printf("%d\n",n);
        m=n%a;
        m=n-m;
        for(i=0;i<m;i++)
            printf("%c",ch[i]);
        printf("\n");
    }
    return 0;
}
