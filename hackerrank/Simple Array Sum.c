#include <stdio.h>
int main()
{
    int i,sum=0,n,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d\n",sum);
    return 0;
}
