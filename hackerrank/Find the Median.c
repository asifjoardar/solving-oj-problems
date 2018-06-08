#include<stdio.h>
int sort(int l[],int m,int r[],int n,int a[])
{
    int i,j,k;
	i = 0; j = 0; k =0;

	while(i<m && j< n) {
		if(l[i]  < r[j]) a[k++] = l[i++];
		else a[k++] = r[j++];
	}
	while(i < m) a[k++] = l[i++];
	while(j < n) a[k++] = r[j++];
}
int asif(int a[],int n)
{
    if(n<2) return;
    int mid,i;
    mid=n/2;
    int l[mid],r[n-mid];
    for(i = 0;i<mid;i++) l[i] = a[i];
	for(i = mid;i<n;i++) r[i-mid] = a[i];
    asif(l,mid);
    asif(r,n-mid);
    sort(l,mid,r,n-mid,a);
}
int main()
{
    int t,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    asif(a,t);
    printf("%d\n",a[t/2]);
    return 0;
}
