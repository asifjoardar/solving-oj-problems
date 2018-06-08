#include<stdio.h>
#include<string.h>
int main()
{
    int a,t,n,max=10000001,i,j,tmp,min=-1,k;
    char str[51],str1[51],str2[51];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        max=10000001;
        min=-1;
        scanf("%d",&n);
        int a;
        for(j=0;j<n;j++)
        {
            scanf("%s%d",str,&a);
            if(a<max){
                max=a;
                for(k=0;str[k]!='\0';k++)
                {
                    str1[k]=str[k];
                }
                str1[k]='\0';
                }
            if(a>min){
                min=a;
                for(k=0;str[k]!='\0';k++)
                {
                    str2[k]=str[k];
                }
                str2[k]='\0';
                }
        }
        printf("%s %s\n",str2,str1);
    }
    return 0;
}
