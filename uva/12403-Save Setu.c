#include<stdio.h>
#include<string.h>
int main()
{
    int sum,n,i,j,a,b;
    char ch[7];
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        scanf("%s",ch);
        if(strcmp(ch,"donate")==0)
        {
            scanf("%d",&b);
            sum=sum+b;
        }
        else if(strcmp(ch,"report")==0)
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
