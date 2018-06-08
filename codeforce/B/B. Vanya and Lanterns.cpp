#include<iostream>
#include<cstdio>
using namespace std;
void asif(double a[],int n)
{
    int i,j,tem;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                tem=a[i];a[i]=a[j];a[j]=tem;
            }
        }
    }
}
int main()
{
    int n,l,i,j;
    cin>>n>>l;
    double a[n],b[n+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    asif(a,n);
    if(a[n-1]==0){
        j=0;
        b[j++]=l-a[0];
        for(i=0;i<n-1;i++)
            b[j++]=(a[i]-a[i+1])/2;}
    else
    {
        j=0;
        b[j++]=l-a[0];
        for(i=0;i<n-1;i++)
            b[j++]=(a[i]-a[i+1])/2;
            b[j++]=a[n-1]-0;
    }
    asif(b,j);
        printf("%lf",b[0]);
    return 0;
}
