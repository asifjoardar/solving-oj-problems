#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,c,p,o1=0,i;
    cin>>a>>b>>c;
    for(i=0;i<a;i++)
    {
        cin>>p;
        if(p==1)
        {
            if(b>0) b--;
            else o1++;
        }
        else
        {
            if(c>0) c--;
            else if(b>0) b--;
            else o1++;
        }
    }
    cout<<o1<<endl;
    return 0;
}
