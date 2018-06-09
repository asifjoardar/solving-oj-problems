#include<iostream>
using namespace std;
int main()
{
    int n,i,max=-1,min=10001,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            count++;
        }
        if(a[i]<min)
        {
            min=a[i];
            count++;
        }
    }
    if(count>=2)
        count-=2;
    cout<<count<<endl;
    return 0;
}
