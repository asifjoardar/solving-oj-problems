#include<stdio.h>
int main()
{
    int i,j,a,f=0;
    char ch[101],ch1[101];
    scanf("%s",ch);
    scanf("%s",ch1);
    a=strlen(ch);
    for(i=0,j=a-1;i<a;i++,j--)
    {
        if(ch[i]!=ch1[j])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
