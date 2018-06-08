#include<stdio.h>
int main()
{
    int i,PA,PB,count,n;
    double G1,G2;
    scanf("%d",&n);
    for(i = 0; i < n;i++){
            count=0;
    scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
    while(PA<=PB){
        PA = PA + (PA*(G1/100));
        PB = PB + (PB*(G2/100));
        count++;
        if(count>100){
            printf("Mais de 1 seculo.\n");
            break;
        }
    }
        if(count<=100)
        printf("%d anos.\n",count);
    }
    return 0;
}
