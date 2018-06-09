#include<stdio.h>
int main()
{
    int f=0,i=0;
    char ch[101];
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++){
    if(ch[i]=='H'||ch[i]=='Q'||ch[i]=='9'){
        f=1;
        break;
    }
    }
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
