#include<stdio.h>
int main()
{
	int num,wage;
	double hour,result;
	scanf("%d %d",&num,&wage);
	scanf("%lf",&hour);
	result=(wage*hour);
	printf("NUMBER = %d\n",num);
	printf("SALARY = U$ %.2lf\n",result);
	return 0;
}
