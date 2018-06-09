#include<stdio.h>
int main()
{
    int s=0,sum=0,i,n,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum%2==1)
        sum+=1;
    for(i=0;i<n;i++)
    {
        s+=a[i];
        if(s>=sum/2)
        {
            p=i;
            break;
        }
    }
    printf("%d\n",p+1);
    return 0;
}
