#include <bits/stdc++.h>
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
using namespace std;

int main() {
	string s;
	cin>>s;
	int i,j;
	for(i=s.size()-1;i>=0;i--)
	{
		if(s[i]!='0')
		    break;
	}
	for(j=0;j<=i;j++)
	    cout<<s[j];
	cout<<"\nStay at Home\n";
	return 0;
}
