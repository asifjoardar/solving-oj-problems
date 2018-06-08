#include<stdio.h>
#include<math.h>
double asif[1000000];
int main()
{
    int n,a,b,c,i;
    long long d;
    asif[0]=0.0;
    for(i=1;i<=1000000;i++){
        asif[i]=asif[i-1]+log10(i);
        }
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        d=(asif[a]/log10(b))+1;
        printf("Case %d: %lld\n",i,d);
    }
    return 0;
}
