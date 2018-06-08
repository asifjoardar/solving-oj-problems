#include<stdio.h>
int main()
{
	int num,a,b,c,d;
	scanf("%d",&num);
	a=num/3600;
	b=num%3600;
	c=b/60;
	d=b%60;
	printf("%d:%d:%d",a,c,d);
	return 0;
}
