#include<stdio.h>
int main()
{
	double asif;
    double N1,N2,N3,N4,n5,media;
	scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
	N1*=2;
	N2*=3;
	N3*=4;
	N4*=1;
	media=(N1+N2+N3+N4)/(2+3+4+1);
	printf("Media: %.1lf\n",media);
	if(media>=7) printf("Aluno aprovado.\n");
	else if(media<5) printf("Aluno reprovado.\n");
	else if(media>=5&&media<=6.9)
		{
			printf("Aluno em exame.\n");
			scanf("%lf",&n5);
			printf("Nota do exame: %.1lf\n",n5);
			media=(media+n5)/2;
			if(media>=5.00) printf("Aluno aprovado.\n");
			else if(media<=4.9) printf("Aluno reprovado.\n");
			printf("Media final: %.1lf\n",media);
		}

	return 0;

}
