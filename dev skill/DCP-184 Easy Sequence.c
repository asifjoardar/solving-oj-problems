#include<stdio.h>
int main()
{
    int a,n,i,j;
    int arr[45];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        int sum=a-1+a-2;
        printf("%d\n",sum);
    }
    return 0;
}
