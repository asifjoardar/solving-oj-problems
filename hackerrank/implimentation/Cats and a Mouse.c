#include<stdio.h>
int main()
{
    int a,b,c,n,i,d,d1,d2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
            d1=abs(a-c);
            d2=abs(b-c);
            if(d1>d2)
                printf("Cat B\n");
            else if(d1<d2)
                printf("Cat A\n");
            else
                printf("Mouse C\n");
    }
    return 0;
}

