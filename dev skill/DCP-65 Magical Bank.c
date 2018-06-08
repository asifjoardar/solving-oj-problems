#include<stdio.h>
int main()
{
    int t,i,j,k,a,b,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&a);
        for(j=1;j<=150;j++)
        {
            for(k=1;k<=j;k++){
                sum++;
                if(sum==a){
                    b=j;
                    break;}
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
