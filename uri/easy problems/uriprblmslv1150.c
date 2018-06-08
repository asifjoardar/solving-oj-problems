#include<stdio.h>
int main()
{
    int sum=0,count=0,a,b,i;
    scanf("%d %d",&a,&b);
    while(b<=a)
        scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        sum=sum+i;
        count++;
        if(sum>b)
            break;
    }
    printf("%d\n",count);
    return 0;
}
