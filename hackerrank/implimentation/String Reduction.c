#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l;
    char s[101];
    scanf("%d",&t);
    while(t--)
    {
        int a=0,b=0,c=0;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='a')
                a++;
            else if(s[i]=='b')
                b++;
            else
                c++;
        }
        l=strlen(s);
        if(a==l||b==l||c==l)
            printf("%d\n",l);
        else if((a%2==0)&&(b%2==0)&&(c%2==0)||(a%2==1)&&(b%2==1)&&(c%2==1))
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}
