#include<stdio.h>
int main()
{
    int n,i,count=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
            continue;
        else
            count++;
    }
    printf("%d\n",count);
    return 0;
}
