#include<iostream>
using namespace std;
main()
{
    int a[4],i,j,c=0;
    for(i=0;i<4;i++)
        cin>>a[i];
    if(a[0]==a[1]||a[0]==a[2]||a[0]==a[3])
        c++;
    if(a[1]==a[2]||a[1]==a[3])
        c++;
    if(a[2]==a[3])
        c++;
    cout<<c<<endl;
}
