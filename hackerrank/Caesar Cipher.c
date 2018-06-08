#include<stdio.h>
int main()
{
    int i,j,a,t;
    char ch[51],c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",ch);
        scanf("%d",&a);
        for(j=0;ch[j]!='\0';j++)
        {
            c=ch[j];
            ch[j]=ch[j]-a;
            if(ch[j]<'A')
                ch[j]=c+(26-a);
        }
        printf("%s\n",ch);
    }
    return 0;
}
