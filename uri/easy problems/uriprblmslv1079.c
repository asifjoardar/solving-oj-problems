#include<stdio.h>
int main()
{
    int n,i;
    float a,b,c,av,dv;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        av=a*2.0+b*3.0+c*5.0;
        dv=av/10.0;
        printf("%.1f\n",dv);
    }
    return 0;
}
