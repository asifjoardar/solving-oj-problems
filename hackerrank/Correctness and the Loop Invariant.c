#include<stdio.h>
void sort(int a[],int l[],int m,int r[],int n)
{
    int i=0,j=0,k=0;
    while(i<m&&j<n)
    {
        if(l[i]<r[j])
            a[k++]=l[i++];
        else
            a[k++]=r[j++];
    }
    while(i<m)
        a[k++]=l[i++];
    while(j<n)
        a[k++]=r[j++];

}
void asif(int a[],int n)
{
    if(n<2) return;
    int mid,i;
    mid=n/2;
    int l[mid],r[n-mid];
    for(i=0;i<mid;i++)
        l[i]=a[i];
    for(i=mid;i<n;i++)
        r[i-mid]=a[i];
    asif(l,mid);
    asif(r,n-mid);
    sort(a,l,mid,r,n-mid);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    asif(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
