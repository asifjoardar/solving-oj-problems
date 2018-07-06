#include<bits/stdc++.h>
using namespace std;
main(){
    int n,m;
    int mini=100000;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    for(int i=0;i<=m-n;i++){
        mini=min(mini,a[i+n-1]-a[i]);
    }
    cout<<mini<<endl;
}
