#include<stdio.h>
int main()
{
    int a[10],b=0,c=0,d=0,e=0,i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    printf("%d valor(es) par(es)\n",b);
    printf("%d valor(es) impar(es)\n",c);
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
        {
            d++;
        }
        else if(a[i]<0)
        {
            e++;
        }
    }
        printf("%d valor(es) positivo(s)\n",d);
        printf("%d valor(es) negativo(s)\n",e);
    return 0;
}
