#include<stdio.h>
int main()
{
    long long int n1=2,a,b,c;
    int i,n,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        scanf("%d",&n);
        n1=1;
        a=0;
        b=1;
        if(n==0)
            printf("Fib(%d) = %lld\n",n,a);
        else if(n==1||n==2)
            printf("Fib(%d) = %lld\n",n,b);
        else{
        while(n1<n)
        {
            c=a+b;
            a=b;
            b=c;
            n1++;
        }
        printf("Fib(%d) = %lld\n",n,c);
        }
    }
    return 0;
}
