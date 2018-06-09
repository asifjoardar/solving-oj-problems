/*
Simple math problem

n*(n+1)/2 = s
n^2+n=2*s
n^2+n+(-2*s)=0

Using quadratic equation ax^2+bx+c=0

del = sqrt(b*b-4*a*c) = sqrt(1-4*1*(-2s)) = sqrt(1+8s)
we know x = (-b(+-) del)/2a

Here i use only + value because del is always positive

so n = (-1+sqrt(1+8s))/2
*/

#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int t,n;
    double x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=(sqrt(1+8*n)-1)/2;
        cout<<(int)x<<endl;
    }
}
