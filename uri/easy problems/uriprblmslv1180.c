#include<stdio.h>
int main()
{
    int n,i,min,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[0]>a[i])
        {
            a[0]=a[i];
            min=a[0];
            b=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",b);
    return 0;
}
