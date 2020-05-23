#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
//#define endl << "\n"
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int used[5005];
string s;
set<string>ans;

void backtrack(int at,string str,int n)
{
	if(at==n)
	{
        string str;
		for(int i=0;i<n;i++)
			str+=s[i];
        ans.insert(str);
		return ;
	}

	for(int i=0;i<n;i++)
	{
		if(!used[i])
		{
			used[i]=1;
			s[at]=str[i];
			backtrack(at+1,str,n);
			used[i]=0;
		}
	}
}

main()
{
	fio();
	string a;
	cin>>a;
	backtrack(0,a,a.size());
    cout<<ans.size()<<endl;
    for(auto it:ans)
        cout<<it<<endl;
}
