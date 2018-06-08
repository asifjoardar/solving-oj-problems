#include<stdio.h>
int main()
{
	int st,as;//st=spent time(1h),as=avarage speed(km/h)
	double sf,us=12;//sf=spent fuel,us=using fuel per litter 12km
	scanf("%d %d",&st,&as);
	sf=(st*as)/us;
	printf("%.3lf\n",sf);
	return 0;
}
