/*#include<stdio.h>
int main()
{
    long long int min,min1;
    int t,i,j,n,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        long long int a[n+1],b[n+1],c[n+1];
        for(j=1;j<=n;j++)
        {
            scanf("%lld%lld",&a[j],&b[j]);
            c[j]=a[j]/2 + b[j]/2 + (a[j]%2) * (b[j]%2);
        }
        min=c[1];
        min1=1000000000000000000;
        for(j=1;j<=n;j++)
        {

            if(c[j]<min){
            min=c[j];
            }
        }
        int count=0;
        for(j=1;j<=n;j++)
        {
            if(min==c[j])
            count++;
        }
        if(count>1)
        {
            for(j=1;j<=n;j++)
            {
            if(min==c[j])
                if(b[j]<min1){
                        min1=b[j];
                    x=j;}
            }
        }
        else{
        for(j=1;j<=n;j++)
        {
            if(c[j]==min)
                x=j;
        }
        }
        printf("Case %d: %lld %lld\n",i,a[x],b[x]);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    long long int min,min1;
    int t,i,j,n,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        long long int a[n+1],b[n+1],c[n+1];
        for(j=1;j<=n;j++)
        {
            scanf("%lld%lld",&a[j],&b[j]);
            c[j]=a[j]/2 + b[j]/2 + (a[j]%2) * (b[j]%2);
        }
        min=c[1];
        for(j=1;j<=n;j++)
        {

            if(c[j]<min){
            min=c[j];
            }
        }
        for(j=1;j<=n;j++)
        {
            if(c[j]==min)
                x=j;
        }
        printf("Case %d: %lld %lld\n",i,a[x],b[x]);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    long long int min;
    int t,i,j,n,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        min=0,c=0;
        scanf("%d",&n);
        long long int s[n],a[n],b[n];
        for(j=0;j<n;j++)
        {
            scanf("%lld %lld",&a[j],&b[j]);
            s[j]=a[j]/2+b[j]/2+(a[j]%2*b[j]%2);
        }
        min=s[0];
        for(j=0;j<n;j++)
        {
            if(s[j]<min)
            {
                min=s[j];
            }
        }
        for(j=0;j<n;j++)
        {
            if(s[j]==min)
                c=j;
        }
        printf("Case %d: %lld %lld\n",i,a[c],b[c]);
    }
    return 0;
}
