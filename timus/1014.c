#include<stdio.h>
int main()
{
    int n,i,j=0,l,a[1000];
    scanf("%d",&n);
    if(n==0)
        printf("10\n");
    else if(n<10&&n>=0)
        printf("%d\n",n);
    else
    {
        j=0;
        for(i=9;i>=2;i--)
        {
            while (n%i == 0)
            {
                n = n/i;
                a[j] = i;
                j++;
            }
        }
        if(n>10)
        {
            printf("-1\n");
        }
        else
        {
            for (i=j-1; i>=0; i--)
            printf("%d", a[i]);
            printf("\n");
        }
    }
    return 0;
}
