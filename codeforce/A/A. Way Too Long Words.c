#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,n;
    char str[100],c1,c2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%s",str);
    a=strlen(str);
    if(a>10){
        b=a-2;
        c1=str[0];
        c2=str[a-1];
        printf("%c%d%c\n",c1,b,c2);
    }
    else
        printf("%s\n",str);
    }
    return 0;
}
