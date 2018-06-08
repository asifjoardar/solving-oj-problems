#include<stdio.h>
int main()
{
    int i,j,k,t,sum,p;
    char ch[500001];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        p=0;
        scanf("%s",ch);
        int a=strlen(ch);
        for(j=0;j<a;j++)
        {
            if(ch[j]=='c'||ch[j]=='h'||ch[j]=='e'||ch[j]=='f')
            {
                sum=ch[j]*ch[j+1]*ch[j+2]*ch[j+3];
            }
            if(sum==106069392)
                p++;
        }
        if(p>0)
            printf("lovely %d\n",p);
        else
            printf("normal\n");
    }
    return 0;
}
