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
        return ((a%c)*(asif(a,b-1,c))%c)%c;
}
int main()
{
    int a,b,c,p;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        p=asif(a,b,c);
        printf("%d\n",p);
    }
    return 0;
}
