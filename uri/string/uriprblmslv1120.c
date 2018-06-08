#include<stdio.h>
int main()
{
    int n,i,j,q,p;
    char s[500],c;
    while(scanf("%d %s",&n,s)){
    if(n==0&&s[0]=='0')
    break;
    else{
    q=1;
    p=1;
    c='0'+n;
    for(i=0;s[i]!='\0';i++)
    {
        //p=1;
        if(s[i]!=c)
        {
            if(s[i]=='0'&&p!=0)
            {
                for(j=i+1;s[j]!='\0';j++)
                {
                    if(s[j]=='0')
                        q=0;
                    else{q=1;break;}
                }
            }
            if(q==0)
            {
                printf("0");
                p=0;
                break;
            }
            if(s[i]!='0'&&p==1){
                printf("%c",s[i]);
                p=0;
            }
            else if(p==0)
                printf("%c",s[i]);
        }
    }
    if(p==1)
        printf("0");
    printf("\n");
    }
    }
    return 0;
}
