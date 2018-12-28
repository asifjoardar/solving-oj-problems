/** BiSmIlLaHiR rAhMaNiR rAhIm **\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
            \**  DIIT(17th batch) **/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
string asif(string str1, string str2) 
{ 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 

    string str = ""; 

    int n1 = str1.length(), n2 = str2.length(); 

    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 

        carry = sum/10; 
    } 

    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 

    if (carry) 
        str.push_back(carry+'0'); 

    reverse(str.begin(), str.end()); 
  
    return str; 
} 
main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	while(n--)
	{
		string ans,s1,s2;
		int p=0,i;
		cin>>s1>>s2;
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		ans=asif(s1,s2);
		reverse(ans.begin(), ans.end());
		for(i=0;i<ans.size();i++)
		{
			if(ans[i]=='0'&&p==0)
				continue;
			else
			{
				p++;
				cout<<ans[i];
			}
		}
		cout<<endl;
	}
}
