#include<iostream>
#include<cstring>
using namespace std;
main()
{
    int n,n1,n2,i,a[26],b[26],p=0;
    char s[101],s1[101],s2[101];
    for(i=0;i<26;i++){
        a[i]=0;b[i]=0;}
    cin>>s1;cin>>s2;cin>>s;
    n=strlen(s);
    n1=strlen(s1);
    n2=strlen(s2);
    char s3[n1+n2];
    for(i=0;i<n1;i++) s3[i]=s1[i];
    for(i=0;i<n2;i++) s3[i+n1]=s2[i];
    for(i=0;i<n;i++)
        a[s[i]-65]++;
    for(i=0;i<n1+n2;i++)
        b[s3[i]-65]++;
    for(i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        {
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
