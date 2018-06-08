#include<stdio.h>
int main()
{
    int a[200],m,car;
    m=1;/// digit counter
    car=0;///Initializ carry variable to 0.
    a[0]=1;/// initializ array with only 1 digit,for the digit 1.
    int i,j,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            x=a[j]*i+car;
            a[j]=x%10;
            car=x/10;
        }
        while(car>0)
        {
            a[m]=car%10;
            car=car/10;
            m++;
        }
    }
    for(i=m-1;i>=0;i--)
        printf("%d",a[i]);
        printf("\n");
    return 0;
}
