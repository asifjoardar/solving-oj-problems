#include<stdio.h>
int main()
{
    int n,i,p=0;
    scanf("%d",&n);
    char s[n][6];
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++)
    {
        if(s[i][0]=='O'&&s[i][1]=='O')
        {
            p=1;
            s[i][0]='+';
            s[i][1]='+';
            break;
        }
        else if(s[i][3]=='O'&&s[i][4]=='O')
        {
            p=1;
            s[i][3]='+';
            s[i][4]='+';
            break;
        }
    }
    if(p==1){
        printf("YES\n");
        for(i=0;i<n;i++) printf("%s\n",s[i]);
    }
    else
    printf("NO\n");
    return 0;
}
