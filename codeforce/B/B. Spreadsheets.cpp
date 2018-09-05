#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,a1,a2,n1,n2;
        int p=0,q=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(p==0&&isalpha(s[i]))
                a1+=s[i];
            else if(q==0&&isdigit(s[i]))
                {p++;n1+=s[i];}
            else if(p>0&&isalpha(s[i]))
                {q++;a2+=s[i];}
            else if(q>0&&isdigit(s[i]))
                n2+=s[i];
        }
        if(q==0)
        {
            int y=0,ans=0;
            for(int i=a1.length();i>0;i--)
            {
                int x=1;
                for(int j=0;j<y;j++) x*=26;
                ans+=x*(a1[i-1]-64);
                y++;
            }
            cout<<"R"<<n1<<"C"<<ans<<endl;
        }
        else
        {
            int num=atoi(n2.c_str());
            string s1;
            while(num)
            {
                int tem=num%26;
                (tem==0)?s1+='Z':s1+=64+tem;
                (tem==0)?num=num/26-1:num/=26;
            }
            reverse(s1.begin(),s1.end());
            cout<<s1<<n1<<endl;
        }
    }
}
