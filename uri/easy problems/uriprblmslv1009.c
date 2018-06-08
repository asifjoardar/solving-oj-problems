#include<stdio.h>
int main()
{
	char name[50];
	double salary,sold,bonous,total;
	scanf("%s",&name);
	scanf("%lf %lf",&salary,&sold);
	bonous=(sold*15)/100;
	total=salary+bonous;
	printf("TOTAL = R$ %lf\n",total);
	return 0;
}
