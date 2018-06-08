#include<stdio.h>
int main()
{
    int n,i,j;
    long long int d,sum,a;
    char ch[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%s",ch);
        scanf("%lld",&d);
        for(j=0;ch[j]!='\0';j++){
            if(ch[j]>='0'&&ch[j]<='9'){
                sum=sum+(ch[j]-48);
                a=sum%d;
                sum=a*10;
            }
        }
        if(a==0)
            printf("Case %d: divisible\n",i);
        else
            printf("Case %d: not divisible\n",i);
    }
    return 0;
}
