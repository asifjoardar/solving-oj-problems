#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,a,k,sum,f,l,m;
    char str[100],tem;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=0;
        sum=0;
        scanf("%d",&a);
        while(a>0)
        {
            if(a%2==0){
                str[j]='0';
                j++;}
            else{
                str[j]='1';
                j++;}
            a=a/2;
        }
        str[j]='0';
        str[j+1]='\0';
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]=='1'&&str[j+1]=='0')
            {
                tem=str[j];
                str[j]=str[j+1];
                str[j+1]=tem;
                for(l=j;l>=0;l--)
                {
                    for(m=l-1;m>=0;m--)
                        if(str[l]>str[m])
                    {
                        tem=str[l];
                    str[l]=str[m];
                    str[m]=tem;
                    }
                }
                break;
            }
        }
        f=strlen(str);
        for(j=1,k=0;k<f;k++,j*=2)
        {
            if(str[k]=='1')
                sum=sum+j;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
