#include<stdio.h>
#include<string.h>
int main()
{
    int a,i;
    char ch[1000];
    while(gets(ch)){
    a=strlen(ch);
    char ch1[a];
    for(i=0;i<a;i++)
    {
        ch1[i]=ch[i]-7;
    }
    ch1[a]='\0';
    printf("%s\n",ch1);
    }
    return 0;
}
