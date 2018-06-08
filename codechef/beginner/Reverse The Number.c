#include<stdio.h>
int main()
{
    int i,j,a,n,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int sum=0;
        scanf("%d",&a);
        while(a>0)
        {
            r=a%10;
            sum=sum*10+r;
            a=a/10;
        }
        printf("%d\n",sum);
    }
    return 0;
}
