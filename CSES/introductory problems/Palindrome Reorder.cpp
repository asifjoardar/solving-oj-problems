#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
#define endl << "\n"
using namespace std;

int main() {
	ll i,count=0;
    string s,jor,bejor;
    map<char,ll>mp;
    cin>>s;
    for(i=0;i<s.size();i++){
    	mp[s[i]]++;
    }
    for(auto it:mp){
        if(it.ss%2==1)
            count++;
    }
    if(count<2)
    {
    	for(auto it:mp){
            if(it.ss%2==1){
            	for(i=0;i<it.ss;i++)
                    bejor+=it.fs;
            }
            else{
            	for(i=0;i<it.ss/2;i++)
                    jor+=it.fs;
            }
        }
        cout<<jor<<bejor;
        reverse(jor.begin(),jor.end());
        cout<<jor endl;
    }
    else cout<<"NO SOLUTION\n";
	return 0;
}
