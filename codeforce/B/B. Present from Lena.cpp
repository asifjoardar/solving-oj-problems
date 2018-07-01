#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int s=n-i;
		while(s--)printf("  ");
		for(int j=0;j<i;j++)printf("%d ",j);
		for(int j=i;j>0;j--)printf("%d ",j);
		printf("0\n");
	}
	for(int i=n;i>=0;i--){
		int s=n-i;
		while(s--)printf("  ");
		for(int j=0;j<i;j++)printf("%d ",j);
		for(int j=i;j>0;j--)printf("%d ",j);
		printf("0\n");
	}
}
