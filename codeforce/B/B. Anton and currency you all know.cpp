#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
    /*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
    int i,count=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){
    if((s[i]-'0')%2==0)
    count++;
    }
    if(count==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            if((s[i]-'0')%2==0)
            {
                if(count==1)
                {
                    swap(s[i],s[s.size()-1]);
                    cout<<s<<endl;
                    break;
                }
                if((s[i]-'0')<(s[s.size()-1]-'0'))
                {
                    swap(s[i],s[s.size()-1]);
                    cout<<s<<endl;
                    break;
                }
                else
                {
                    count--;
                }
            }
        }
    }
}
