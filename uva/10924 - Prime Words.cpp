#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int a[4001]={0};
void sieve()
{
	 int i,j;
	 for(i=4;i<4001;i+=2) a[i]=1;
	 for(i=3;i<4001;i+=2)
	 {
        if(a[i]==0)
        {
            for(j=3;j*i<4001;j++)
            a[i*j]=1;
        }
	 }
}
main(){
    sieve();
    char s[50];
    int sum;
    while(cin>>s)
    {
        sum=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(isupper(s[i]))
            sum+=s[i]-38;
            else
            sum+=s[i]-96;
        }
        if(a[sum]==0)
        cout<<"It is a prime word.\n";
        else
        cout<<"It is not a prime word.\n";
    }
}
