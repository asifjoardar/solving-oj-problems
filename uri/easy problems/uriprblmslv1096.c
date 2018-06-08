#include<stdio.h>
int main()
{
    int i=1,j,n=1;
    while(n<=5)
    {
        for(j=7;j>=5;j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        i=i+2;
        n++;
    }
}
