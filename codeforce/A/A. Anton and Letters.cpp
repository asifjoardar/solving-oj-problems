#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,count=0;
    char s[1001];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z'&&s[i]!='0'){
            count++;
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
                s[j]='0';
        }
        }
    }
    cout<<count<<endl;
    return 0;
}
