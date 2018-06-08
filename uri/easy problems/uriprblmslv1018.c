#include<stdio.h>
int main()
{
	int num,a;
	scanf("%d",&num);
	printf("%d\n",num);
	printf("%d nota(s) de R$ 100,00\n",num/100);
	a=num%100;
	printf("%d nota(s) de R$ 50,00\n",a/50);
	a=a%50;
	printf("%d nota(s) de R$ 20,00\n",a/20);
	a=a%20;
	printf("%d nota(s) de R$ 10,00\n",a/10);
	a=a%10;
	printf("%d nota(s) de R$ 5,00\n",a/5);
	a=a%5;
	printf("%d nota(s) de R$ 2,00\n",a/2);
	a=a%2;
	printf("%d nota(s) de R$ 1,00\n",a/1);
	return 0;
}
