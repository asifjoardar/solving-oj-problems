#include<stdio.h>
int main()
{
    int n,i,j,p=0,tem;
    while(scanf("%d",&n)==1){
    p=0;
    int a[n],s[n-1];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        s[i]=abs(a[i]-a[i+1]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(s[i]>s[j])
            {
                tem=s[i];
                s[i]=s[j];
                s[j]=tem;
            }
        }
    }
    for(i=0;i<n-2;i++)
    {
        if(abs(s[i+1]-s[i])!=1)
        {
            p=1;
            break;
        }
    }
    if(p==1)
        printf("Not jolly\n");
    else
        printf("Jolly\n");
    }
    return 0;
}
