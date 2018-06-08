#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n,tem,x;
    scanf("%d",&n);
    int a[n],b[100],c[100],c1[100];
    for(i=1;i<100;i++)
        b[i]=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]!=0&&a[i]==a[j]){
                b[a[i]]++;
                a[j]=0;
            }
        }
    }
    j=0;k=0;
    for(i=1;i<100;i++)
    {
        if(b[i]!=0){
            c[j++]=b[i];
            c1[k++]=i;
        }
    }
    int sum=0,max=-1;
    for(i=0;i<j;i++)
    {
        x=abs(c1[i]-c1[i+1]);
        if(x==1)
            sum=sum+c[i]+c[i+1];
        else
            sum=sum+c[i];
        if(sum>max)
            max=sum;
            sum=0;
    }
    printf("%d\n",max);
    return 0;
}
