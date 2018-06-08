#include<stdio.h>
int main()
{
    int count,f,i,j;
    char s[10000];
    while(scanf("%[^\n]s",s)==1)
    {
        getchar();
        count=0;
        for(i=0;s[i]!='\0';)
        {
            f=0;
            for(j=i;s[j]!='\0';j++){
            if(s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z')
            {
                i++;
                f=1;
            }
            else
            {
                i++;
                break;
            }
            }
            if(f==1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
