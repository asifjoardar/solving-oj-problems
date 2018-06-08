#include<stdio.h>
int main()
{
	int A,B,C,D,ab,cd;
	scanf("%d %d %d %d",&A,&B,&C,&D);
	if(B>C&&D>A)
	{
		ab=A+B;
		cd=C+D;
		if(cd>ab)
		{
			if(C>0&&D>0)
			{
				if(A%2==0)
					printf("Valores aceitos\n");
			}
		}
	}
	else printf("Valores nao aceitos\n");
	return 0;
}
