#include<stdio.h>
int asif(int a,int b,int c)
{
    if(b==0) return 1;
    if(b%2==0)
    {
        int x=asif(a,b/2,c);
        return ((x%c)*(x%c))%c;
    }
    else
        return ((a%c)*asif(a,b-1,c)%c)%c;
}
int main()
{
    int a,b,p;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        p=asif(a,b,100);
        if(p<10)
            printf("0%d\n",p);
        else
            printf("%d\n",p);
    }
    return 0;
}
