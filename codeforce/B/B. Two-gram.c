#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,max=-1,count,a;
    char c1,c2;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;i<n-1;i++)
    {
        count=0;
        for(j=i+1;j<n-1;j++)
        {
            if(s[j]==s[i])
            {
                if(s[j+1]==s[i+1])
                    count++;
            }
        }
        if(count>max)
        {
            max=count;
            c1=s[i];
            c2=s[i+1];
        }
    }
    printf("%c%c\n",c1,c2);
    return 0;
}
