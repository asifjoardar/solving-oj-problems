#include<stdio.h>
/*int asif(char *ch1[])
{
    int n,i;
    //printf("%s\n",ch1);
    for(i=0;ch1[i]!='\0';i++)
    {
        //n=ch1[i]-48;
        printf("%c\n",ch1[i]);
        if(i>=1)
        {
            n=(n*10)+ch1[i+1]-48;
        }
    }
    //printf("%d\n",n);
    //return n;
}*/
int main()
{
    int t,i,j,l,a[51],n;
    char ch[51],ch1[5];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        l=0;
        int k=0;
        scanf("%[^\n]s",ch);
        getchar();
        int p=strlen(ch);
        for(j=0;j<=p;j++)
        {
            ch1[k++]=ch[j];
            if(ch[j]==' '||ch[j]=='\0'){
                n=atoi(ch1);
                k=0;
            }
            printf("%d\n",n);
        }

        /*for(j=0;j<=l;j++)
            printf("%d\n",a[j]);*/
    }
}
