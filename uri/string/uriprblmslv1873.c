#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char c[8],c1[8];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s",c,c1);
        if(strcmp(c,c1)==0)
            printf("empate\n");
        else if(strcmp(c,"tesoura")==0)
        {
            if(strcmp(c1,"papel")==0||strcmp(c1,"lagarto")==0)
                printf("rajesh\n");
            else
                printf("sheldon\n");
        }
        else if(strcmp(c,"papel")==0)
        {
            if(strcmp(c1,"pedra")==0||strcmp(c1,"spock")==0)
                printf("rajesh\n");
            else
                printf("sheldon\n");
        }
        else if(strcmp(c,"pedra")==0)
        {
            if(strcmp(c1,"lagarto")==0||strcmp(c1,"tesoura")==0)
                printf("rajesh\n");
            else
                printf("sheldon\n");
        }
        else if(strcmp(c,"lagarto")==0)
        {
            if(strcmp(c1,"spock")==0||strcmp(c1,"papel")==0)
                printf("rajesh\n");
            else
                printf("sheldon\n");
        }
        else if(strcmp(c,"spock")==0)
        {
            if(strcmp(c1,"pedra")==0||strcmp(c1,"tesoura")==0)
                printf("rajesh\n");
            else
                printf("sheldon\n");
        }
    }
    return 0;
}
