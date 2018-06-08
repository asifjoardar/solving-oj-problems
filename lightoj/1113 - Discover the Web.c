#include<stdio.h>
int main()
{
    int i,j,n,k,l,m,o,p;
    char ch[100][50],ch1[20],ch2[25]="http://www.lightoj.com/";;
    for(i=0;ch2[i]!='\0';i++)
    {
        ch[0][i]=ch2[i];
    }
    scanf("%d",&n);
    for(p=1;p<=n;p++)
    {
        printf("Case %d:",p);
        k=0;
    j=0;
    l=1;
    m=0;
    while(scanf("%s",ch1)!=EOF)
    {
        if(strcmp(ch1,"QUIT")==0)
            break;
        else if(strcmp(ch1,"VISIT")==0)
        {

            k++;
            j++;
            m++;
            scanf("%s",ch[k]);
            printf("%s\n",ch[k]);
        }
        else if(strcmp(ch1,"BACK")==0)
        {
            if(k<=0)
                printf("Ignored\n");
            else
            {
                k--;
                printf("%s\n",ch[k]);
                m=m-1;
            }
        }
        else if(strcmp(ch1,"FORWARD")==0)
        {
            if((l>j)||(l==1&&m==j))
                printf("Ignored\n");
            else
            {
                l++;
                k++;
                printf("%s\n",ch[k]);
            }
        }
    }
    }
    return 0;
}
