#include<iostream>
using namespace std;
int main()
{
    int i,n,x,y,f1,f2;
    cin>>n;
    int a,max=-1,min=101;
    for(i=0;i<n;i++){
        cin>>a;
    if(a>max){
        max=a;
        x=i;
    }
    if(a<=min){
        min=a;
        y=i;
    }
    }
    if(x<y)
        cout<<x+(n-y)-1<<endl;
    else{
        cout<<x+(n-y)-2<<endl;
    }
    return 0;
}
