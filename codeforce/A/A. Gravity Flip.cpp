#include<iostream>
using namespace std;
int sort(int a[],int l[],int n1,int r[],int n2)
{
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(l[i]<r[j])
        {
            a[k]=l[i];
            i++;
            k++;
        }
        else
        {
            a[k]=r[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        a[k++]=l[i++];
    }
    while(j<n2)
        a[k++]=r[j++];
}
void asif(int a[],int n)
{
    int mid,i;
    if(n<2) return;
    mid=n/2;
    int l[mid],r[n-mid];
    for(i=0;i<mid;i++) l[i]=a[i];
    for(i=mid;i<n;i++) r[i-mid]=a[i];
    asif(l,mid);
    asif(r,n-mid);
    sort(a,l,mid,r,n-mid);
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    asif(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<' ';
    cout<<endl;
    return 0;
}
