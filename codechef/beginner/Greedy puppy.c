#include<stdio.h>
int main()
{
    int t,a,b,i;
    scanf("%d",&t);
    while(t--)
    {
        int max=-1;
        scanf("%d%d",&a,&b);
        for(i=b;i>=1;i--)
        {
            if(a%i!=0)
            {
                if((a%i)>max)
                    max=a%i;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
