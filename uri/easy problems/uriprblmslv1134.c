#include<stdio.h>
int main()
{
    int a,alco=0,gaso=0,dis=0;
    for( ; ; )
    {
        asif:
            scanf("%d",&a);
            if(a==1)
                alco++;
            else if(a==2)
                gaso++;
            else if(a==3)
                dis++;
            else if(a==4)
                break;
            else
                goto asif;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alco);
    printf("Gasolina: %d\n",gaso);
    printf("Diesel: %d\n",dis);
    return 0;
}
