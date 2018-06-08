#include<stdio.h>
int main()
{
    int i=1,j=7,n=1,m;
    while(n<=5)
    {
        for(m=1;m<=3;m++)
        {
            printf("I=%d J=%d\n",i,j);
            j--;
        }
        i=i+2;
        j=j+5;
        n++;
    }
    return 0;
}

