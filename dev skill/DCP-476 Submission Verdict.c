#include<stdio.h>
int main()
{
    int i,n;
    char str[5];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",str);
        if(strcmp(str,"wa")==0)
            printf("Wrong Answer\n");
        else if(strcmp(str,"ac")==0)
            printf("Accepted\n");
        else if(strcmp(str,"rte")==0)
            printf("Run Time Error\n");
        else if(strcmp(str,"tle")==0)
            printf("Time Limit Exceeded\n");
    }
    return 0;
}
