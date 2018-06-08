#include<stdio.h>
void merge(int *a,int *l,int nl,int *r,int nr)
{
    int i=0,j=0,k=0;
    while(i<nl&&j<nr)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<nl)
    {
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<nr)
    {
        a[k]=r[j];
        j++;
        k++;
    }
}
void mergesort(int *a,int s)
{
    int mid,i;
    if(s<2) return;
    mid=s/2;
    int l[mid],r[s-mid];
    for(i=0;i<mid;i++)
        l[i]=a[i];
    for(i=mid;i<s;i++)
        r[i-mid]=a[i];
    mergesort(l,mid);
    mergesort(r,s-mid);
    merge(a,l,mid,r,s-mid);
}
int main()
{
    int t,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    mergesort(a,t);
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
}

