#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=6;i++)
    {
        if(a%2==0)
        {
            a=a+1;
        }
        else
            a=a+2;
        printf("%d\n",a);
    }
    return 0;
}
