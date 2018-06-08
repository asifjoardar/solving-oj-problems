/*#include <stdio.h>
long long int asif(long long int a,long long int b)
{
    if(a%b==0) return b;
    else
        return asif(b,a%b);
}
int main()
{
    long long int n1,n2,i,j,n,f,a,b,gcd,lcd,p,r,k;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
    scanf("%lld %lld",&n1,&n2);
    b=(n1<n2)?n1:n2;
    a=(n1>n2)?n1:n2;
    gcd=asif(a,b);
    lcd=(n1*n2)/gcd;
    printf("%lld %lld\n",gcd,lcd);
    }
    return 0;
}
*/
#include <stdio.h>
#include<math.h>
int main()
{
    long long int n1,n2,i,j,n,f,a,b,gcd,lcd,p,r,k;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
    scanf("%lld %lld",&n1,&n2);
    a=(n1<n2)?n1:n2;
    b=(n1>n2)?n1:n2;
    if(b%a==0)
        gcd=a;
    else{
        k=b;
        r=a;
        while(r!=0)
        {
            p=r;
            r=k%r;
            k=p;
        }
        gcd=p;
    }
    lcd=(a*b)/gcd;
    printf("%lld %lld\n",gcd,lcd);
    }
    return 0;
}
