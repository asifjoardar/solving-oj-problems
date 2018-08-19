#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,i,j,f=0;
    char s[200];
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n>>s;
        for(i=0,j=n-1;i<n/2;i++,j--)
        {
            if(s[i]!=s[j])
            {
                if(s[i]=='a'&&s[j]!='z'){
                    s[i]=s[i]+1;
                    if(s[i]!=s[j]-1&&s[i]!=s[j]+1){
                        f=1;break;
                    }
                }
                else if(s[i]=='z'&&s[j]!='a'){
                    s[i]=s[i]-1;
                    if(s[i]!=s[j]-1&&s[i]!=s[j]+1){
                        f=1;break;
                    }
                }
                else if(s[i]!='a'&&s[j]=='z'){
                    s[j]=s[j]-1;
                    if(s[j]!=s[i]-1&&s[j]!=s[i]+1){
                        f=1;break;
                    }
                }
                else if(s[i]!='z'&&s[j]=='a'){
                    s[j]=s[j]+1;
                    if(s[j]!=s[i]-1&&s[j]!=s[i]+1){
                        f=1;break;
                    }
                }
                else
                {
                    if(abs(s[i]-s[j])!=2)
                        f=1;
                }

            }
        }
        if(f==1)
                cout<<"NO"<<endl;
        else
                cout<<"YES"<<endl;
    }
}
