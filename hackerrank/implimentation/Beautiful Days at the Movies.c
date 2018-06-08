#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,a,b,c,p,n,count=0;
    char s[11],ch[11];
    scanf("%d%d%d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        int x=i;
        sprintf(s,"%d",x);
        n=strlen(s);
        for(j=n-1,k=0;j>=0;j--,k++)
            ch[k]=s[j];
        sscanf(ch,"%d",&p);
        if((x-p)%c==0)
            count++;
    }
    printf("%d\n",count);
}
