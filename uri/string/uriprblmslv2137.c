#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,tem,j;
    while(scanf("%d",&n)!=EOF){
    char s[n][5],s1[n][5];
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        sscanf(s[i], "%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sprintf(s1[i],"%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(strlen(s1[i])<4)
        {
            if(strlen(s1[i])==1)
                printf("000%s\n",s1[i]);
            else if(strlen(s1[i])==2)
                printf("00%s\n",s1[i]);
            else if(strlen(s1[i])==3)
                printf("0%s\n",s1[i]);
        }
        else
        printf("%s\n",s1[i]);
    }
    }
    return 0;
}
