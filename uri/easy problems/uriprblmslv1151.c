/*#include<stdio.h>
int main()
{
    int a,b,c,n,count;
    scanf("%d",&n);
    a=0;
    b=1;
    count=2;
    printf("%d %d",a,b);
    while(count<n)
    {
        if(count==n)
        {
            printf("\n");
            break;
        }
        printf(" ");
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
        count++;
    }
    return 0;

}*/
/*#include <stdio.h>
int main()
{
    int x,y, a=0,b=1,c=0;
    scanf("%d", &x);
    for(y=1; y<x; y++)
    {
        if(y%2==1)
        {
            printf("%d ",c);
            c=a+b;
            a=c;
        }
        else if(y==2)
            printf("%d ",c);
        else if(y%2==0)
        {
            printf("%d ",c);
            c=a+b;
            b=c;
        }
    }
    printf("%d\n",c);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d ",a);
    for(i=2;i<n;i++)
    {
        printf("%d ",b);
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d\n",b);
    return 0;
}
