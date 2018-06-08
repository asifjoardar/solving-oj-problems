#include<stdio.h>
int main()
{
	double A,B,C;
	scanf("%lf",&A);
	if(A>=0&&A<=400.00)
	{
		B=A*15/100;
		C=A+B;
		printf("Novo salario: %.2lf\n",C);
		printf("Reajuste ganho: %.2lf\n",B);
		printf("Em percentual: 15 %%\n");
	}
	else if(A>=400.01&&A<=800.00)
	{
		B=A*12/100;
		C=A+B;
		printf("Novo salario: %.2lf\n",C);
		printf("Reajuste ganho: %.2lf\n",B);
		printf("Em percentual: 12 %%\n");
	}
	else if(A>=800.01&&A<=1200.00)
	{
		B=A*10/100;
		C=A+B;
		printf("Novo salario: %.2lf\n",C);
		printf("Reajuste ganho: %.2lf\n",B);
		printf("Em percentual: 10 %%\n");
	}
	else if(A>=1200.01&&A<=2000.00)
	{
		B=A*7/100;
		C=A+B;
		printf("Novo salario: %.2lf\n",C);
		printf("Reajuste ganho: %.2lf\n",B);
		printf("Em percentual: 7 %%\n");
	}
	else if(A>2000.00)
	{
		B=A*4/100;
		C=A+B;
		printf("Novo salario: %.2lf\n",C);
		printf("Reajuste ganho: %.2lf\n",B);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}
