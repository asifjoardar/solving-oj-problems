
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t,a=1000000000, b=1000000000, c=1000000000,d,x;
    ll ab=1000000000,ac=1000000000,bc=1000000000,abc=1000000000;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        if(s=="AB")
        {
            if(ab>n)
                ab=n;
        }
        else if(s=="BC")
        {
            if(bc>n)
                bc=n;

        }
        else if(s=="AC")
        {
            if(ac>n)
                ac=n;
        }
        else if(s=="A")
        {
            if(a>n)
                a=n;
        }
        else if(s=="B")
        {
            if(b>n)
                b=n;
        }
        else if(s=="C")
        {
            if(c>n)
                c=n;
        }
        else if(s=="ABC")
        {
            if(abc>n)
                abc=n;
        }
    }
    x=a+b+c;
    x=min(bc+a,x);
    x=min(ab+c,x);
    x=min(ac+b,x);
    x=min(abc,x);
    x=min(ab+bc,x);
    x=min(ac+bc,x);
    x=min(ab+ac,x);
    
    if(x==1000000000)
        cout<<-1<<endl;
    else
    cout<<x<<endl;
}
