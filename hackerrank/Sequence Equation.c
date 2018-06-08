#include<stdio.h>
int main()
{
    int n,i,x,y,j;
    scanf("%d",&n);
    int a[n+1],b[n+1];
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==a[j]){
                x=j;
                break;}
        }
        for(j=1;j<=n;j++)
        {
            if(a[j]==x){
                y=j;
                break;}
        }
        printf("%d\n",y);
    }
    return 0;
}
