#include<stdio.h>
int main()
{
    int i,n;
    int count=0;
    char c[4];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",c);
        if(c[0]=='+'||c[2]=='+')
            count++;
        else if(c[0]=='-'||c[2]=='-')
            count--;
    }
    printf("%d\n",count);
    return 0;
}
