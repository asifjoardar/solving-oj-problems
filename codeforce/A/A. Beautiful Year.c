#include<stdio.h>
int main()
{
    int i,a;
    char s[5];
    scanf("%d",&a);
    for(i=a+1;;i++)
    {
        sprintf(s,"%d",i);
        if(s[0]!=s[1]&&s[0]!=s[2]&&s[0]!=s[3]){
            if(s[1]!=s[2]&&s[1]!=s[3])
            {
                if(s[2]!=s[3])
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
