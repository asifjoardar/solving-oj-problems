#include<bits/stdc++.h>
using namespace std;
main()
{
    int i=0,k=1,p[26],j,n;
    char s[101];
    while(i<=14)
    {
        if(k==4)
            k=1;
        p[i]=k;
        k++;i++;
    }
    k=1;i=15;
    while(i<=18)
    {
        if(k==5)
            k=1;
        p[i]=k;
        k++;i++;
    }
    k=1;i=19;
    while(i<=21)
    {
        if(k==4)
            k=1;
        p[i]=k;
        k++;i++;
    }
    k=1;i=22;
    while(i<=25)
    {
        if(k==5)
            k=1;
        p[i]=k;
        k++;i++;
    }
    int l,g;
    cin>>n;
    getchar();
    for(i=1;i<=n;i++)
    {
        int sum=0;
        gets(s);
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            g=s[j]-'a';
            if(s[j]==' ')
                sum+=1;
            else
                sum+=p[g];
        }
        printf("Case #%d: %d\n",i,sum);
    }
}
