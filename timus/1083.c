#include<stdio.h>
int main()
{
    int sum,n,i,count;
    char ch[20];
    while(scanf("%d %s",&n,ch)==2)
    {

        i=0,count=0,sum=1;
        while(ch[i]!='\0')
        {
            if(ch[i]=='!')
                count++;
                i++;
        }
        for(i=n;i>=1;i=i-count)
            sum=sum*i;
        printf("%d\n",sum);
    }
    return 0;
}
