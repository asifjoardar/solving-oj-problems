#include<stdio.h>
int main()
{
    int i=0;
    char a[6]="hello",c;
    while(scanf("%c",&c))
    {
        if(c=='\n')
            break;
        if(a[i]==c)
            i++;
    }
    if(i==5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
