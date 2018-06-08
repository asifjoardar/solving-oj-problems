#include<stdio.h>
int main()
{
    char c[51];
    int t,i,j,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",c);
        a=0;
        for(j=0;c[j]!='\0';j++)
        {
            if(c[j]=='r')
            {
                a=1;
                break;
            }
        }
        if(a==1) printf("Not vely easy\n");
        else printf("Vely easy\n");
    }
    return 0;
}
