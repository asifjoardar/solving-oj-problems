#include<stdio.h>
int main()
{
    int a,b,c,d,n,i,count=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&n);
    int arr[n+1];
    for(i=1;i<=n;i++)
        arr[i]=0;
    if(a==1)
        printf("%d\n",n);
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i%a==0||i%b==0||i%c==0||i%d==0)
                arr[i]=1;
        }
        for(i=1;i<=n;i++)
        {
            if(arr[i]==1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
