#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,q,p,f=0,m,n,x;
    char s1[250000],s2[250000],c1[250000],c2[250000];
    cin>>m>>n>>s1>>s2;
    if(strcmp(s1,s2)==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=0;i<m;i++)
    {
        if(s1[i]=='*')
        {
            x=i;f=1;break;
        }
    }
    if(f==1)
    {
        if(m-1>n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        j=0;k=0;q=0;
        for(i=0;i<m;i++)
        {
            c1[j++]=s1[i];
            if(s1[i]=='*')
            {
                c1[j-1]='\0';
                for(i=i+1;i<m;i++)
                c2[k++]=s1[i];
            }
        }
        c2[k]='\0';
        for(i=0;c1[i]!='\0';i++)
        {
            if(s2[i]!=c1[i])
            {
                q=1;
                //cout<<1<<endl;
                break;
            }
        }
        for(i=k-1,j=n-1;i>=0;i--,j--)
        {
            if(c2[i]!=s2[j])
            {
                q=1;
                //cout<<2<<endl;
                break;
            }
        }
        //cout<<c1<<" "<<c2<<endl;
        if(q==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}
