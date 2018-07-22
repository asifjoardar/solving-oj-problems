#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],t;
    string s;
    cin>>t;
        getchar();
    while(t--){
    n=0;
    int m=-1;
    getline(cin,s);
    istringstream is(s);
    while(is>>a[n]){
    n++;
    }
    for(int i = 0;i<n;++i)
        for(int j = i+1;j<n;++j)
            m = max(m,__gcd(a[i],a[j]));
    cout<<m<<endl;
    }
}
