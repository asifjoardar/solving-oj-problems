#include<stdio.h>
int main()
{
    int a,b,i,c,count=0;
    scanf("%d%d",&a,&b);
    int s[a];
    for(i=0;i<a;i++)
        scanf("%d",&s[i]);
    c=s[b-1];
    for(i=0;i<a;i++)
    {
        if(s[i]>=c&&s[i]!=0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
