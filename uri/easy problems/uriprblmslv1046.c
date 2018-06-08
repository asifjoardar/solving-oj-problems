#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(a>b||a==b)
	{
		c=(24-a)+b;
	}
	else if(a<b)
	{
		c=b-a;
	}
	printf("O JOGO DUROU %d HORA(S)",c);
	return 0;
}
