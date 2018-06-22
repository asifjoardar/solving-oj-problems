#include<bits/stdc++.h>
using namespace std;
void asif(char *s, int b, int e)
{
   int i,j;
   for(i=0,j=e;i<j;i++,j--)
   {
       swap(s[i],s[j]);
   }
}
main()
{
    int n,i;
    cin>>n;
    char s[n];
    cin>>s;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            asif(s,0,i-1);
        }
    }
    strrev(s);
    cout<<s<<endl;
}
