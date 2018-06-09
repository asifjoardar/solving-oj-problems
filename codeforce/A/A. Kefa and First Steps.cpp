#include<iostream>
using namespace std;
int main()
{
    int n,i,count=1,max=-1,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count>max)
            max=count;
    }
    cout<<max<<endl;
    return 0;
}
