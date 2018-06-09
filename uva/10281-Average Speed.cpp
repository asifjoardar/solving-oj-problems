#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    int hh,ss,mm;
    double r1=0,tym=0,tym1=0,v=0;
    char s[1000];
    while(gets(s))
    {

        sscanf(s, "%d:%d:%d", &hh, &mm, &ss);
        tym=hh+(mm/60.)+(ss/3600.0);
        if(s[8]=='\0')
        {
            r1+=(tym-tym1)*v;
            printf("%s %.2lf km\n",s,r1);
        }
        else
        {
            r1 += (tym-tym1)*v;
            sscanf(s+8, "%lf", &v);
        }
        tym1=tym;
    }
}
