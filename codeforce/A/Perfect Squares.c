#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,a,s,m=0,i;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%I64d",&a);
         if(a>=0)
         {
                s=sqrt(a);
         if(a!=(s*s))
         {
             if(a>m)
                m=a;
         }
         }
        else if(a<0&&m<a)
        {
                m=a;
        }
    }
    printf("%I64d\n",m);
    return 0;
}
