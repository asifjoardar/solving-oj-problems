#include<stdio.h>
#include<string.h>
char ch[500000];
long long int p;
long long int asif(long long int x)
{
    long long int i,sum=0;
    sprintf(ch,"%lld",x);
    if(strlen(ch)>1)
    {
        for(i=0;ch[i]!='\0';i++)
        {
            sum=sum+ch[i]-48;
        }
        asif(sum);
    }
    else
    {
        sscanf(ch,"%lld",&p);
    }
    return p;
}
int main()
{
    long long int n,i,a,sum=0;
    char s[1000000];
    scanf("%s%lld",s,&n);
    for(i=0;s[i]!='\0';i++)
    {
        sum=sum+s[i]-48;
    }
    sum=sum*n;
    a=asif(sum);
    printf("%lld\n",a);
    return 0;
}
