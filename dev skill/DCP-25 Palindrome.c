#include<stdio.h>
int main()
{
    int n,a,i,j,k,p,b;
    char str[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",str);
        b=1;
        k=0;
        a=strlen(str);
        for(j=0;j<a;j++)
        {
            if(str[j]>='A'&&str[j]<='Z')
                str[j]=str[j]+32;
        }
        for(j=a-1;j>=a/2;j--)
        {
            if(str[j]!=str[k])
            {
                b=0;
                break;
            }
            k++;
        }
        if(b==1)
            printf("Yes\n");

        else
            printf("No\n");
    }
    return 0;
}
