#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a;
    long long int p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
            printf("0\n");
        else
        {
            p=pow((a-1),2)*2;
            printf("%lld\n",p);
        }
    }
    return 0;
}
