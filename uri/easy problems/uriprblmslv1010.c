#include<stdio.h>
int main()
{
	int pc,pn;
	double pp,sum1,sum2;
	scanf("%d %d %lf",&pc,&pn,&pp);
	sum1=pn*pp;
	scanf("%d %d %lf",&pc,&pn,&pp);
	sum2=pn*pp;
	printf("VALOR A PAGAR: R$ %.2lf\n",sum1+sum2);
	return 0;
}
