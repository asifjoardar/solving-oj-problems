#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,a,s,m=-1,x=-1000000,i,p=0,q=0;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%I64d",&a);
        if(a>=0)
        {
            s=sqrt(a);
         if(a!=(s*s))
         {
             if(a>m)
                m=a;
                q=1;
         }
        }
        else if(a<0)
        {
            if(a>x)
            x=a;
            p=1;
        }
    }
    if(p==1&&q==1){
    if(x>m)
    printf("%d\n",x);
    else
    printf("%d\n",m);
    }
    else if(p==1&&q==0)
    {
        printf("%d\n",x);
    }
    else if(p==0&&q==1)
        printf("%d\n",m);
    else
        printf("0\n");
    return 0;
}
