#include<stdio.h>
int main()
{
    int i,j=0,tem,c=0;
    char s[101];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='1'&&s[i]<='9')
            c++;
    }
    int a[c];
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='1'&&s[i]<='9')
        {
            a[j++]=s[i]-48;
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        if(i<c-1)
            printf("%d+",a[i]);
        else
            printf("%d\n",a[i]);
    }
    return 0;
}
