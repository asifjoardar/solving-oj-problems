#include<stdio.h>
int main()
{
    int t,a,i;
    char s[11];
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        scanf("%d",&a);
        sprintf(s,"%d",a);
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]!='0'&&(a%(s[i]-48))==0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
