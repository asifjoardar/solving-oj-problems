#include<stdio.h>
int main()
{
    int i,j=0,a,n;
    while(1)
    {
        int count=0,count0=0;
        j++;
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a==0)
                count0++;
            else
                count++;
        }
        printf("Case %d: %d\n",j,count-count0);
    }
    return 0;
}
