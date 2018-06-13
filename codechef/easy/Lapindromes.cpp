#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,n1,n2,i;
    char s[1001];
    cin>>t;
    while(t--)
    {
        int count=0;
        int a[26]={0},b[26]={0};
        cin>>s;
        n=strlen(s);
        if(n%2==0)
        {
            n1=n/2;
            n2=n1;
        }
        else
        {
            n1=n/2;
            n2=n1+1;
        }
            for(i=0;i<n1;i++)
                a[s[i]-'a']++;
            for(i=n2;i<n;i++)
                b[s[i]-'a']++;
            for(i=0;i<26;i++)
            {
                if(a[i]>0&&b[i]>0){
                if(a[i]==b[i])
                    count+=a[i];
                }
            }
            if(count==n/2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
}
