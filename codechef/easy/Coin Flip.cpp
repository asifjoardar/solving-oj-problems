#include<iostream>
using namespace std;
main()
{
    int n,m,i,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            if(b%2==0) cout<<b/2<<endl;
            else
            {
                if(a==1){
                if(c==1) cout<<(b/2)<<endl;
                else cout<<(b/2)+1<<endl;}
                else
                {
                    if(c==2) cout<<(b/2)<<endl;
                    else cout<<(b/2)+1<<endl;
                }
            }
        }
    }
}
