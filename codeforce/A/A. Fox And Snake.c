#include<stdio.h>
int p;
void asif(int n)
{
    for(int i=0;i<n;i++)
        printf("#");
    printf("\n");
}
void asif1(int n)
{
    if(p%2==0){
    for(int i=0;i<n-1;i++)
        printf(".");
        printf("#\n");
        p++;
    }
    else
    {
        printf("#");
        for(int i=0;i<n-1;i++)
        printf(".");
        printf("\n");
        p++;
    }
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(i&1)
            asif(b);
        else
            asif1(b);
    }
    return 0;
}
