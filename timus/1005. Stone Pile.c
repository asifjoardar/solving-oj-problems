#include<stdio.h>
int main()
{
    int n,i,min=100001,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        p=abs(a[i]-a[i-1]);
        if(min>p)
            min=p;
    }
    printf("%d\n",min);
    return 0;
}
