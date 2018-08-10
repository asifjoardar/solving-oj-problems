#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001];
main()
{
    int n,count=0,count1=0,i,k=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>0){
            a[x]++;
        }
        else if(x<0){
            b[(x*-1)]++;
            k++;
        }
    }
    sort(a,a+100001);
    sort(b,b+100001);
    for(i=100000;i>=1;i--)
    {
        if(a[i]==0)
        break;
        count++;
    }
    for(i=100000;i>=1;i--)
    {
        if(b[i]==0)
        break;
        count1++;
    }
    cout<<count+count1<<endl;
}
