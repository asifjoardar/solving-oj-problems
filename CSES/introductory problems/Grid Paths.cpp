#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<ll,ll>
#define ss second
#define fs first
#define endl << "\n"
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

string s;
ll count1,vis[10][10];

void chk(ll x,ll y,ll k,char ch){
	
	if(x==0 && y==6){
		if(k==48)
		    count1++;
		return;
	}
	
	if(x<0 || x>6 || y<0 || y>6){
		return;
	}
	if(vis[y][x]==1) return;
	
	if(ch=='L')
	    if((x==0 || vis[y][x-1]==1) && y>0 && y<6 && vis[y+1][x]==0 && vis[y-1][x]==0)
	        return;
	if(ch=='R')
	    if((x==6 || vis[y][x+1]==1) && y>0 && y<6 && vis[y+1][x]==0 && vis[y-1][x]==0)
	        return;

	if(ch=='D')
	    if((y==6 || vis[y+1][x]==1) && x>0 && x<6 && vis[y][x+1]==0 && vis[y][x-1]==0)
	        return;
	if(ch=='U')
	    if((y==0 || vis[y-1][x]==1) && x>0 && x<6 && vis[y][x+1]==0 && vis[y][x-1]==0)
	        return;
    
	
	vis[y][x]=1;

	if((s[k]=='R'||s[k]=='?')&&vis[y][x+1]==0)
	    chk(x+1,y,k+1,'R');
	
	if((s[k]=='L'||s[k]=='?')&&vis[y][x-1]==0)
	    chk(x-1,y,k+1,'L');
	
	if((s[k]=='U'||s[k]=='?')&&vis[y-1][x]==0)
	    chk(x,y-1,k+1,'U');
	
	if((s[k]=='D'||s[k]=='?')&&vis[y+1][x]==0)
	    chk(x,y+1,k+1,'D');
	
	 vis[y][x]=0;
}

int main(){
	fio();
    cin>>s;
	chk(0,0,0,0);
	cout<<count1 endl;
	return 0;
}
