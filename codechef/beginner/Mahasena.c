#include<stdio.h>
int main()
{
    int n,a,o=0,e=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        if(a&1)
            o++;
        else
            e++;
    }
    if(o>=e)
        printf("NOT READY\n");
    else
        printf("READY FOR BATTLE\n");
    return 0;
}
