#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,l,l1,i,j,k,x,b;
    cin>>n;
    char s[n+1],s1[n+1],c[n+1],c1[n+1];
    int p[50000];
    cin>>s>>s1;
    strcpy(c,s);strcpy(c1,s1);
    l=strlen(s);l1=strlen(s1);
    sort(s,s+l);sort(s1,s1+l1);
    if(strcmp(s,s1)!=0)
        cout<<-1<<endl;
    else if(strcmp(c,c1)==0)
        cout<<0<<endl;
    else
    {
        k=0;
        x=0;b=0;
        for(i=0;i<n;i++)
        {
            if(c[i]!=c1[i])
            {
                b=0;
                for(j=i+1;j<n;j++)
                {
                    if(c[j]==c1[i])
                    {
                        b=j;break;
                    }
                }
            }
            while(c[i]!=c1[i])
            {
                swap(c[b],c[b-1]);
                p[k++]=b;
                b--;
            }
        }
        cout<<k<<endl;
        for(i=0;i<k;i++)
            cout<<p[i]<<" ";
        cout<<endl;
    }
}
