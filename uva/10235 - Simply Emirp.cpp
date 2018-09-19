#include<bits/stdc++.h>
using namespace std;
int a[1000000];
void seive()
{
    for(int i=4;i<1000000;i+=2) a[i]=1;
    for(int i=3;i<1000000;i+=2)
    {
        if(a[i]==0)
        {
            for(int j=3;j*i<1000000;j++)
            a[i*j]=1;
        }
    }
}
int rev(int n)
{
    int r=0,r1;
    while(n!=0)
    {
        r1=n%10;
        r=r*10+r1;
        n/=10;
    }
    return r;
}
main()
{
    seive();
    int n,n1;
    while(cin>>n)
    {
        if(a[n]==1) printf("%d is not prime.\n",n);
        else
        {
            n1=rev(n);
            if(a[n1]==0&&n!=n1) printf("%d is emirp.\n",n);
            else printf("%d is prime.\n",n);
        }
    }
}
