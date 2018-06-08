#include<stdio.h>
int main()
{
    int a,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>=120)
            printf("Good Boy Sifat\n");
        else
            printf("Naughty Boy Sifat\n");
    }
    return 0;
}
