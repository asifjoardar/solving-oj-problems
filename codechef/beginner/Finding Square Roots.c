#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        b=sqrt(a);
        printf("%d\n",b);
    }
    return 0;
}
