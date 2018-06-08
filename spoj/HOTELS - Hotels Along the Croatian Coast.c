#include<stdio.h>
int main()
{
    int l=0,r=0,sum=0,x=0,i,n,b;
    scanf("%d%d",&n,&b);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(l<n)
    {
        while(r<n&&sum+a[r]<=b)
        {
            sum=sum+a[r];
            r++;
        }
        if(sum>x)
            x=sum;
        sum=sum-a[l];
        l++;
    }
    printf("%d\n",x);
    return 0;
}
