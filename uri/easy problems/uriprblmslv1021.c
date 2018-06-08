#include<stdio.h>
int main()
{
	double num,a,b;
	float c;
	scanf("%lf",&num);
	printf("NOTAS:\n");
	a=num/100;
	printf("%d nota(s) de R$ 100.00\n",(int)a);
	a=num-((int)a*100);
	b=a/50;
	printf("%d nota(s) de R$ 50.00\n",(int)b);
	b=a-((int)b*50);
	a=b/20;
	printf("%d nota(s) de R$ 20.00\n",(int)a);
	a=b-((int)a*20);
	b=a/10;
	printf("%d nota(s) de R$ 10.00\n",(int)b);
	b=a-((int)b*10);
	a=b/5;
	printf("%d nota(s) de R$ 5.00\n",(int)a);
	a=b-((int)a*5);
	b=a/2;
	printf("%d nota(s) de R$ 2.00\n",(int)b);

	printf("MOEDAS:\n");

	b=a-((int)b*2.00);
	a=b/1.00;
	printf("%d moeda(s) de R$ 1.00\n",(int)a);
	a=b-((int)a*1.00);
	b=a/0.50;
	printf("%d moeda(s) de R$ 0.50\n",(int)b);
	b=a-((int)b*.50);
	a=b/0.25;
	printf("%d moeda(s) de R$ 0.25\n",(int)a);
	a=b-((int)a*.25);
	b=a/0.10;
	printf("%d moeda(s) de R$ 0.10\n",(int)b);
	b=a-((int)b*.10);
	a=b/0.05;
	printf("%d moeda(s) de R$ 0.05\n",(int)a);
	a=b-((int)a*.05);
	c=a/0.01;
	printf("%d moeda(s) de R$ 0.01\n",(int)c);
    return 0;
}
