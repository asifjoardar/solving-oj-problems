#include<iostream>
using namespace std;
int main()
{
    int n,i;
    char c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        if(c=='B'||c=='b')
            cout<<"BattleShip"<<endl;
        else if(c=='C'||c=='c')
            cout<<"Cruiser"<<endl;
        else if(c=='D'||c=='d')
            cout<<"Destroyer"<<endl;
        else if(c=='F'||c=='f')
            cout<<"Frigate"<<endl;
    }
    return 0;
}
