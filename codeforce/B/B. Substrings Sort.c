#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,p=0;
    scanf("%d",&n);
    char s[n][101],c[101],c1[101];
    for(i=0;i<n;i++) scanf("%s",s[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strlen(s[i])>strlen(s[j]))
            {
                strcpy(c,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],c);
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        strcpy(c,s[i]);
        strcpy(c1,s[i+1]);
        if (!(strstr(c1,c)))
        {
            p=1;
            break;
        }
    }
    if(p==0){
            printf("YES\n");
    for(i=0;i<n;i++)
        printf("%s\n",s[i]);
    }
    else
        printf("NO\n");
    return 0;
}
