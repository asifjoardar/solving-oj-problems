#include<bits/stdc++.h>
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	double p,s;
    int t;
    cin>>t;
    while(t--){
        cin>>p>>s;
        
        double h1=(p+sqrt(p*p-24.0*s))/12.0;
        double h2=(p-sqrt(p*p-24.0*s))/12.0;

        if(6.0*h1-(p/2.0)<=0){
            printf("%.2f\n",(s/2.0)*h1-(p/4.0)*h1*h1+h1*h1*h1);
        }else{
            printf("%.2f\n",(s/2.0)*h2-(p/4.0)*h2*h2+h2*h2*h2);
        }
    }
}
