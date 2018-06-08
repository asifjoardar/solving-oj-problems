#include<stdio.h>
int main()
{
    int a,b,d=0,a1=0,b1=0,total=0,no;
    for( ; ; )
    {
        scanf("%d %d",&a,&b);
        if(a>b)
                a1++;
            else if(a<b)
                b1++;
            else
                d++;
            total++;
        asif:
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&no);
        if(no==1)
        {
            continue;
        }
        else if(no==2)
        {
            printf("%d grenais\n",total);
            printf("Inter:%d\n",a1);
            printf("Gremio:%d\n",b1);
            printf("Empates:%d\n",d);
            if(a1>b1)
                printf("Inter venceu mais\n");
            else if(a1<b1)
                printf("Gremio venceu mais\n");
            else
                printf("Nao houve vencedor\n");
            break;
        }
        else
            goto asif;
    }
    return 0;
}
