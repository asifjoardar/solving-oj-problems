
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    string s;
    cin>>n;
    while(n--)
    {
    	int boro=0,choto=0,num=0;
    	cin>>s;
    	for(i=0;i<s.size();i++)
    	{
    		if(isupper(s[i]))
    			boro++;
    		else if(islower(s[i]))
    			choto++;
    		else
    			num++;

    	}
    	if(boro>0&&choto>0&&num>0)
    		cout<<s<<endl;
    	else
    	{
    		int x=0,y=0;
    		if(boro==0)
    		{
    			if(choto>=num) x=1;
    			else y=1;
    			if(x>y)
    			{
    				for(i=0;i<s.size();i++)
    				{
    					if(islower(s[i]))
    					{
    						s[i]='A';
    						break;
    					}
    				}
    			}
    			else
    			{
    				for(i=0;i<s.size();i++)
    				{
    					if(isdigit(s[i]))
    					{
    						s[i]='A';
    						break;
    					}
    				}
    			}
    		}
    		if(choto==0)
    		{
    			if(boro>=num) x=1;
    			else y=1;
    			if(x>y)
    			{
    				for(i=0;i<s.size();i++)
    				{
    					if(isupper(s[i]))
    					{
    						s[i]='a';
    						break;
    					}
    				}
    			}
    			else
    			{
    				for(i=0;i<s.size();i++)
    				{
    					if(isdigit(s[i]))
    					{
    						s[i]='a';
    						break;
    					}
    				}
    			}
    		}
    		if(num==0)
    		{
    			if(choto>=boro) x=1;
    			else y=1;
    			if(x>y)
    			{
    				for(i=0;i<s.size();i++)
    				{
    					if(islower(s[i]))
    					{
    						s[i]='1';
    						break;
    					}
    				}
    			}
    			else
    			{
    				for(i=0;i<s.size();i++)
    				{
    					if(isupper(s[i]))
    					{
    						s[i]='1';
    						break;
    					}
    				}
    			}
    		}
    		cout<<s<<endl;
    	}
    }
}
