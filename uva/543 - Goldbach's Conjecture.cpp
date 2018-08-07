#include <bits/stdc++.h>
using namespace std;
int m[1000000]={0},P[100000],k=0;
void Sieve()
{
	int i,j;
	for(i=2;i<1000000;i+=2) m[i]=1;
	for(i=3;i<1000000;i+=2){
		if(m[i]==0){
			P[k++]=i;
			for(j=3;i*j<1000000;j+=2)
				m[i*j]=1;
		}
	}
}
main()
{
	int n,i;
	Sieve();
	while(cin>>n){
            if(n==0) break;
		int x,y,f=0;
		for(i=0;i<n;i++) {
			x=P[i],y=n-P[i];
			if(x > y)break;
			if(m[y]==0){
				printf("%d = %d + %d\n",n,x,y);
				f=1;
				break;
			}
		}
		if(!f)
        printf("Goldbach's conjecture is wrong.\n");
	}
}

