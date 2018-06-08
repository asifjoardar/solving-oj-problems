#include<stdio.h>
#include<math.h>
int main()
{
	double x1,y1,x2,y2,distance;
	scanf("%lf %lf/n",&x1,&y1);
	scanf("%lf %lf/n",&x2,&y2);
	distance=(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	distance=sqrt(distance);
	printf("%.4lf\n",distance);
	return 0;
	getche();
}
