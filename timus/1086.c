/*#include<stdio.h>
int sive(int p)
{
    int prime[200000],i,j,count=0;
    for(i=0;i<200000;i++)
        prime[i]=1;
    prime[0]=0;
    prime[1]=0;
    for(i=2;i<=200000;i++)
    {
        for(j=2;i*j<=200000;j++)
            prime[i*j]=0;
    }
    for(i=0;i<200000;i++)
    {
        if(prime[i]==1)
            count++;
        if(count==p)
            {
                return i;
            }
    }
}
int main()
{
    int n,p,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
        c=sive(p);
        printf("%d\n",c);
    }
    return 0;
}
*/
/*#include<stdio.h>
int sive(int p)
{
    int prime[200000],prime1[200000],i,j,k=0,count=0;
    for(i=0;i<200000;i++)
        prime[i]=1;
    prime[0]=0;
    prime[1]=0;
    for(i=2;i<=200000;i++)
    {
        for(j=2;i*j<=200000;j++)
            prime[i*j]=0;
    }
    for(i=0;i<20000;i++)
    {
        if(prime[i]==1)
            {
                prime1[k]=i;
                k++;
            }

    }
    printf("%d\n",prime1[p-1]);
    return 0;
}
int main()
{
    int n,p,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
        if(p==1)
    {
       printf("%d\n",2);
    }
        else
        {
            c=sive(p);
        }
    }
}*/
/*#include<stdio.h>
#define F 200000
int sive(int p)
{
    long long int i,j,k;
    int prime[F],asif[F];
    asif[1]=2;
    prime[2]=0;
    for(i=3;i<=F;i=i+2)
        prime[i]=1;
    for(i=4;i<=F;i=i+2)
        {
            prime[i]=0;
        }
    for(i = 3; i<F; i+=2){
        for(j=3;j*i<=F;j+=i)
            prime[j*i]=0;
        }
        k=2;
        for(i=3;i<=F;i+=2)
        {
            if(prime[i]!=0)
            {
                asif[k]=i;
                k++;
            }
        }
        printf("%d\n",asif[p]);
        return 0;
}
int main()
{
    int n,p,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
        c=sive(p);
    }
}
*/
#include<stdio.h>
#define F 164000
int sive(int p)
{
    long long int i,j,k;
    int sq=sqrt(164000);
    int prime[F],asif[F];
    asif[1]=2;
    prime[1]=0;prime[0]=0;
    for(i=3;i<=F;i=i+2)
        prime[i]=1;
    k=2;
        for(i=3;i<=sq;i+=2)
        {
            if(prime[i]!=0)
            {
                asif[k]=i;
                k++;
                for(j=i*i;j<=sq;j+=i)
                prime[j]=0;
            }
        }
        printf("%d\n",asif[p]);
        return 0;
}
int main()
{
    int n,p,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
        c=sive(p);
    }
}
