#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    char s[10];
    scanf("%d%d",&a,&b);
    c=a-b;
    sprintf(s,"%d",c);
    if(s[0]<'9')
    s[0]=s[0]+1;
    else
    s[0]=s[0]-1;
    printf("%s\n",s);
    return 0;
}
