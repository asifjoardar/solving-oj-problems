#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n,a,b,c,d;
    char ch[101],ch1[101],str[101],str1[101],tem;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(ch);
        gets(ch1);
        for(j=0;ch[j]!='\0';j++)
        {
            if(ch[j]>='A'&&ch[j]<='Z')
                ch[j]=ch[j]+32;
        }
        for(j=0;ch1[j]!='\0';j++)
        {
            if(ch1[j]>='A'&&ch1[j]<='Z')
                ch1[j]=ch1[j]+32;
        }
        for(j=0;ch[j]!='\0';j++)
        {
            for(k=j+1;ch[k]!='\0';k++)
            {
                if(ch[j]>ch[k])
                {
                    tem=ch[j];
                    ch[j]=ch[k];
                    ch[k]=tem;
                }
            }
        }
        for(j=0;ch1[j]!='\0';j++)
        {
            for(k=j+1;ch1[k]!='\0';k++)
            {
                if(ch1[j]>ch1[k])
                {
                    tem=ch1[j];
                    ch1[j]=ch1[k];
                    ch1[k]=tem;
                }
            }
        }
        for(j=0,k=0;ch[j]!='\0';j++)
        {
            if(ch[j]!=' ')
            {
                str[k]=ch[j];
                k++;
            }
        }
        str[k]='\0';
        for(j=0,k=0;ch1[j]!='\0';j++)
            {
                if(ch1[j]!=' ')
                {
                    str1[k]=ch1[j];
                    k++;
                }
            }
        str1[k]='\0';
        if(strcmp(str,str1)==0)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
