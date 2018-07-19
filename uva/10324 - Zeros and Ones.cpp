#include<bits/stdc++.h>
using namespace std;
main(){
    char arr[1000010];
    int o,p,c=1,n,k=0,l,i;
    while(scanf("%s",arr)!=EOF){
        printf("Case %d:\n",c++);
        cin>>n;
        l=strlen(arr);
        while(n--){
            scanf("%d %d",&o,&p);
            if(o>p){
                swap(o,p);
            }
            for(i=o;i<p;i++){
                if(arr[i]!=arr[i+1]){
                    break;
                }}
            if(i<p) printf("No\n");
            else printf("Yes\n");
        }
    }
}
