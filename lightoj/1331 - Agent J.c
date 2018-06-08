#include<stdio.h>
int main()
{
    int n,i;
    double a,b,c,ab,bc,ac,ar1,ar2,ar3,p,ta,fa,A,B,C;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        ab=a+b;
        bc=b+c;
        ac=a+c;
        A=acos(((ab*ab)+(ac*ac)-(bc*bc))/(2*ab*ac));
        B=acos(((ab*ab)+(bc*bc)-(ac*ac))/(2*ab*bc));
        C=acos(((ac*ac)+(bc*bc)-(ab*ab))/(2*ac*bc));
        ar1=(A/2)*(a*a);
        ar2=(B/2)*(b*b);
        ar3=(C/2)*(c*c);
        p=(ab+bc+ac)/2;
        ta=sqrt(p*(p-ab)*(p-bc)*(p-ac));
        fa=ta-(ar1+ar2+ar3);
        printf("Case %d: %lf\n",i,fa);
    }
    return 0;
}
