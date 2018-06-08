#include<stdio.h>
int main()
{
    int t,b,i,j;
    char a[20];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int count=0,c;
        scanf("%s %d",a,&b);
        for(j=0;j<b;j++)
        {
            if(a[j]=='9')
                count++;
        }
        for(j=b;j<b+count;j++)
        {
            if(a[j]=='9')
                count++;
        }
        if(b!=0)
        {
            for(j=0;j<b+count;j++)
                a[j]='9';
        }
        printf("Case %d: %s\n",i,a);
    }
    return 0;
}
