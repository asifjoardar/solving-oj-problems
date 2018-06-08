#include<stdio.h>
int main()
{
    int a,b,i,j,k,m,n,count,max,t;
    char c[100],c1[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        max=0;
        scanf("%s %s",c,c1);
        a=strlen(c);b=strlen(c1);
        for(j=0;j<a;j++)
        {
            for(k=0;k<b;k++)
            {
                count=0;
                if(c[j]==c1[k])
                {
                    for(m=j,n=k;c[m]!='\0'||c1[n]!='\0';m++,n++)
                    {
                        if(c[m]==c1[n]){
                            count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                if(count>max) max=count;
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
