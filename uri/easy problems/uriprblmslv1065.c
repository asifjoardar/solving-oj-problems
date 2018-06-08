#include<stdio.h>
int main()
{
    int a[10],b=0,i;
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
    }
    printf("%d valores pares\n",b);
    return 0;
}
