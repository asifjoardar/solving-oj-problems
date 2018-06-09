#include<iostream>
using namespace std;
int main()
{
    int n,i,p=0,l,r,x=0,y=0,c;
    cin>>n;
    int a[n];
    l=0;r=n-1;
    for(i=0;i<n;i++)
        cin>>a[i];
    while(l<=r)
    {
        if(a[l]>a[r])
        {
            c=a[l++];
        }
        else if(a[l]<a[r])
            c=a[r--];
        else if(l==r)
            c=a[l++];
        if(p%2==0)
            x=x+c;
        else
            y=y+c;
        p++;
    }
    cout<<x<<' '<<y<<endl;
    return 0;
}
