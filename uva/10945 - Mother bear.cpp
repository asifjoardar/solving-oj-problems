        /** BiSmIlLaHiR rAhMaNiR rAhIm **\

*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*

            \**  DIIT(17th batch) **/
#include<bits/stdc++.h>
using namespace std;

main()
{
    int i;
    string a,s,s1;
    while(getline(cin,a)){
    if(a=="DONE") break;
    for(i=0;i<a.size();i++)
    {
        if(isalpha(a[i])){

        if(isupper(a[i]))
        {
        a[i]=tolower(a[i]);
        }
        s+=a[i];
        s1+=a[i];
        }
    }
    reverse(s1.begin(),s1.end());
    if(s==s1)
    cout<<"You won't be eaten!\n";
    else
    cout<<"Uh oh..\n";
    a.clear();s.clear();s1.clear();
    }
}
