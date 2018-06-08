#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    double a[n],sum=0.0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/100;
    sum=sum/n;
    sum=sum*100;
    cout << fixed << setprecision(12) << sum <<endl;
    return 0;
}
