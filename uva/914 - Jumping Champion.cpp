#include<bits/stdc++.h>
using namespace std;
long long int p[1000001],p1[99999],i,j;
void seve()
{
    p[0]=1;p[1]=1;
    for(i=4;i<=1000000;i+=2) p[i]=1;
    for(i=3;i<=1000000;i+=2)
    {
        if(p[i]==0)
        {
            for(j=3;j*i<=1000000;j++)
                p[i*j]=1;
        }
    }
}
main()
{
    seve();
    long long int t,a,b;
    cin>>t;
    while(t--)
    {
        long long int x[99999]={0},k=0,l=0;
        long long int max=-1,min=1000000,q=0;
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            if(p[i]==0)
                p1[k++]=i;
        }
        for(i=0;i<k-1;i++)
        {
            x[p1[i+1]-p1[i]]++;
        }
        for(i=1;i<99999;i++)
        {
            if(x[i]>max){
                max=x[i];
                j=i;
            }
            if(min>x[i])
            {
                min=x[i];
            }
        }
        for(i=1;i<99999;i++)
        {
            if(max==x[i])
                l++;
            if(l>1){
            q=1;
                break;
            }
        }
        if(q==1)
            printf("No jumping champion\n");
        else
            printf("The jumping champion is %d\n",j);
    }
    return 0;
}
