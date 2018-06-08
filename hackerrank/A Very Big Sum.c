#include <stdio.h>
int main()
{
    int n,i;
    long long int sum=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        sum=sum+a;
    }
    printf("%lld\n",sum);
    return 0;
}
