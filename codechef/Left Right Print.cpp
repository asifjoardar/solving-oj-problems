#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,n;
    char s[101],c1[101],c2[101];
    cin>>n;
    while(n--)
    {
        int j=0,k=0;
        cin>>s;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            c1[j++]=s[i];
            else
            c2[k++]=s[i];
        }
        c1[j]='\0';c2[k]='\0';
        cout<<c1<<c2<<endl;
    }
}
