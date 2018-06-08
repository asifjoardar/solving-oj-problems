#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b&&a<c&&b<c)
		printf("%d\n%d\n%d\n",a,b,c);
	else if(a<b&&a<c&&b>c)
		printf("%d\n%d\n%d\n",a,b,c);
	else if(a>b&&a>c&&b>c)
		printf("%d\n%d\n%d\n",c,b,a);
	else if(a>b&&a>c&&b<c)
		printf("%d\n%d\n%d\n",b,c,a);
	else if(b>a&&b>c&&a>c)
		printf("%d\n%d\n%d\n",c,a,b);
	else if(b>a&&b>c&&a<c)
		printf("%d\n%d\n%d\n",a,c,b);
	return 0;
}

