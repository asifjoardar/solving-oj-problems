#include<bits/stdc++.h>
using namespace std;
int prime(long long int n){
    int a=sqrt(n),i;
    for (i=2;i<=a;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
main()
{
    long long int a,i,p,n;
    char s[101];
    while(cin>>s){
        p=0;
        n=strlen(s);
        a=atoll(s);
        printf("%lld\n",a*2);
        for(i=0,--n;i<n;n--,i++){
            if(s[i]!=s[n]) {
                p=1;
                break;
            }
        }
        if(p==0 && prime(a)==1) break;
    }
}
