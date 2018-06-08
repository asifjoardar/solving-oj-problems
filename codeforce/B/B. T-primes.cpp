#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int a)
{
	if(a==1) return 0;
	int b=sqrt(a);
	for (int k = 2; k <= b; k++)
	{
		if(a%k==0) return 0;
	}
	return 1;
}
int main()
{
    long long int n,a,x,p;
    cin>>n;
    while(n--)
    {
        cin>>a;
        x=sqrt(a);
        p=isPrime(x);
        if(x*x==a&&p==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
