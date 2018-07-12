#include<bits/stdc++.h>
using namespace std;
int asif(int x,int y)
{
    if(x==0)
        return y;
	return asif(y%x,x);
}
main()
{
    int n,i,m,p;
    cin>>n;
    while(n--)
    {
        p=0;
        cin>>m;
        int a[m];
        for(i=0;i<m;i++) cin>>a[i];
        sort(a,a+m);
        for(i=0;i<m-1;i++)
        {
            p=asif(a[i],a[i+1]);
            if(p==1)
                break;
        }
        if(p==1)
            cout<<0<<endl;
        else
            cout<<-1<<endl;
    }
}
