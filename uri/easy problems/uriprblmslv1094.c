#include<stdio.h>
int main()
{
    int rabbit=0,rat=0,frog=0,n,i,total,a;
    double t,r,ra,f;
    char c;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&a,&c);
        if(c=='R')
        {
            rat=rat+a;
        }
        else if(c=='C')
        {
            rabbit=rabbit+a;
        }
        else if(c=='S')
        {
            frog=frog+a;
        }
    }
    total=rat+rabbit+frog;
    t=100.00/(double)total;
    r=((double)rabbit*1.0)*t;
    ra=((double)rat*1.0)*t;
    f=((double)frog*1.0)*t;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2lf %%\n",r);
    printf("Percentual de ratos: %.2lf %%\n",ra);
    printf("Percentual de sapos: %.2lf %%\n",f);

    return 0;
}
