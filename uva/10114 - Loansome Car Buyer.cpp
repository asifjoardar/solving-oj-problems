#include<bits/stdc++.h>
using namespace std;
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int i,a,d,loandur;
	double dwnpay,loan,dpr[101],b;
	double mnthlypmnt,carval,carloan;
	while(cin>>loandur>>dwnpay>>loan>>d)
	{
		if(loandur<0) break;
		while(d--)
		{
			cin>>a>>b;
			for(i=a;i<101;i++)
			{
				dpr[i]=b;
			}
		}
		mnthlypmnt=loan/loandur;
		carval=(loan+dwnpay)-((loan+dwnpay)*dpr[0]);
		carloan=loan;
		int n=0;
		while(carval<carloan)
		{
			carloan-=mnthlypmnt;
			carval=carval-(carval*dpr[++n]);
		}
		cout<<n;
		if(n!=1)
			cout<<" months\n";
		else
			cout<<" month\n";
	}
}
