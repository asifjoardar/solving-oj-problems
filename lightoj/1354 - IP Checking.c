/*#include<stdio.h>
int st[8];
int main()
{
    int n,i,a,b,c,d,j,k,count;
    char p[36];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%s",p);
        for(j=0;j<=7;j++)
        {
            if(a%2==1)
            {
                st[j]=1;
            }
            else
            {
                st[j]=0;
            }
            a=a/2;
        }
        for(j=0,k=7;j<=7;j++,k--)
        {
            if(st[k]!=p[j]-48)
                count=1;
        }
        for(j=0;j<=7;j++)
        {
            if(b%2==0)
            {
                st[j]=0;
            }
            else
            {
                st[j]=1;
            }
            b=b/2;
        }
        for(j=9,k=7;j<=16;j++,k--)
        {
            if(st[k]!=p[j]-48)
                count=1;
        }
        for(j=0;j<=7;j++)
        {
            if(c%2==0)
            {
                st[j]=0;
            }
            else
            {
                st[j]=1;
            }
            c=c/2;
        }
        for(j=18,k=7;j<=25;j++,k--)
        {
            if(st[k]!=p[j]-48)
                count=1;
        }
        for(j=0;j<=7;)
        {
            if(d%2==0)
            {
                st[j]=0;
                j++;
            }
            else
            {
                st[j]=1;
                j++;
            }
            d=d/2;
        }
        for(j=27,k=7;j<=34;j++,k--)
        {
            if(st[k]!=p[j]-48)
                count=1;
        }
        if(count==0)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,j,k,n,sum,m,l,num;
    int s[4];
    int a[4];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int p=0;
        scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
        scanf("%d.%d.%d.%d",&s[0],&s[1],&s[2],&s[3]);
        for(j=0;j<4;j++){
                sum=0;
                n=0;
                num=s[j];
        while(num!=0)
            {
                l=num%10;
                m=l*pow(2,n);
                sum+=m;
                num/=10;
                n++;
            }
            if(sum==a[j]) p++;
            }
        if(p==4) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
}
