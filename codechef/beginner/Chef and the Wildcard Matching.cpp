#include<iostream>
using namespace std;
main()
{
    int i,t;
    char s[11],s1[11];
    cin>>t;
    while(t--){
    cin>>s>>s1;
    int p=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z'&&s1[i]>='a'&&s1[i]<='z')
        {
            if(s[i]!=s1[i])
            {
                p=1;
                break;
            }
        }
    }
    if(p==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }
}
