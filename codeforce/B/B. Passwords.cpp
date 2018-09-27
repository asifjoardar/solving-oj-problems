/**
    _________  _________  __________  ______
    ||=====||  |=======|  ||======||  ||||||
    ||     ||  ||             ""      ||
    ||-----||  ||=====||      ""      |||||
    ||     ||         ||      ""      ||
    ||     ||  |=======|  ||======||  ||

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(string a,string b)
{
    return a.size()<b.size();
}
int main()
{
	int n,k,ans1,ans2,count=0;
	string str[101],s;
	cin>>n>>k;
	for(int i=0;i<n;i++)
        cin>>str[i];
	cin>>s;
	sort(str,str+n,cmp);
	int min=0,max=0;
	for(int i=0;i<n;i++){
            if(s.size()==str[i].size()){
                ans1=i+1;
                break;
            }
            else
            count++;
    }
    ans1=count+((count)/k)*5+1;
    count=0;
    for(int i=0;i<n;i++){
            if(s.size()<str[i].size()){
                break;
            }
            else
            count++;
    }
    //cout<<count<<endl;
    ans2=count+((count-1)/k)*5;
	cout<<ans1<<' '<<ans2<<endl;
}
