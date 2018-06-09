#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[123],i;
    char c,s[101];
    char x[31]={"qwertyuiopasdfghjkl;zxcvbnm,./"};
    for(i=0;i<30;i++)
        a[(int)x[i]]=i;
    scanf("%c%s",&c,s);
    if(c=='R'){
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",x[a[(int)s[i]]-1]);
    }
    }
    else if(c=='L'){
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",x[a[(int)s[i]]+1]);
    }
    }
    cout<<endl;
    return 0;
}
/*
#include<stdio.h>
int main()
{
    int i,p,j=0;
    char c,s[101];
    char b[30]="qwertyuiopasdfghjkl;zxcvbnm,./";
    scanf("%c%s",&c,s);
    if(c=='R') p=-1;
    else p=1;
    for(i=0;s[i]!='\0';i++)
    {
        j=0;
        while(1)
        {
            if(s[i]==b[j]){
                printf("%c",b[j-1]);
                break;
            }
            j++;
        }
    }
    printf("\n");
    return 0;
}
*/
