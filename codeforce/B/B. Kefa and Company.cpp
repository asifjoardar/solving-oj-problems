#include <bits/stdc++.h>
using namespace std;
#define fs first
#define sc second
typedef long long int lli;
int main()
{
    long long int n,t,i,sum=0,l,r,m=0;
    cin>>n>>t;
    pair<lli,lli> a[n];
    l=0;r=0;
    for(i=0;i<n;i++){
        cin>>a[i].fs>>a[i].sc;
    }
    sort(a,a+n);
    /*while(l<n)
    {
        if(a[l].fs-a[r].fs<t)
        {
            sum+=a[l].sc;
            l++;
            m=max(m,sum);
        }
        else
            sum-=a[r++].sc;
    }*/
    while(r<n)
    {
        while(l<n&&a[l].fs-a[r].fs<t)
        {
            sum+=a[l].sc;
            l++;
            m=max(m,sum);
        }
        sum-=a[r++].sc;
    }
    cout<<m<<endl;
    return 0;
}
