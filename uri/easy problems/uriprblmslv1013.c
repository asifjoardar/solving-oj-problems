#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	d=(a+b+(a*b)*(a-b))/2;
	d=(d+c+(a*b)*(d-c))/2;
	printf("%d eh o maior/n",d);
	return 0;
}
