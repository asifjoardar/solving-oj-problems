#include<stdio.h>
int main()
{
    int a,n,sum,i,b,result;
    while(scanf("%d %d",&a,&n)!=EOF)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&b);
            sum=sum+b;
        }
        if(sum>=a)
            printf("Project will finish within 1 day.\n");
        else
        {
            if(a%sum==0)
          {
            result=a/sum;
          }
            else
          {
            result=(a/sum)+1;
          }

          if(result==1)
         {
            printf("Project will finish within 1 day.\n");
         }
         else
          {
            printf("Project will finish within %d days.\n",result);
          }
        }
    }
    return 0;
}
