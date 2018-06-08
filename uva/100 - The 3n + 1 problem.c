#include<stdio.h>
int asif(int i,int count)
{
    if(i==1)
        return count;
    else
    {
        if(i%2==0){
                count++;
            return asif(i/2,count);}
        else{
                count++;
                return asif(((i*3)+1),count);
        }
    }
}

int main()
{
    int a,b,i,tem,j=0,count,c,a1,b1,s;
    while(scanf("%d %d",&a,&b)==2){
            s=0;
    a1=a;b1=b;
    if(a>b)
    {
        tem=a;
        a=b;
        b=tem;
    }
    for(i=a;i<=b;i++)
    {
        count=1;
        c=asif(i,count);
        if(c>=s)
            s=c;
        j++;
    }
    printf("%d %d %d\n",a1,b1,s);
    }
    return 0;
}
//113383 113383
/*#include<stdio.h>
int main()
{
    int n,m,i,k,j,c,s;
    while(scanf("%d %d",&n,&m)==2){
        s=0;
        printf("%d %d",n,m);
        if(n>m)
        {
            k=m;
            m=n;
            n=k;
        }
        for(i=n; i<=m; i++)
        {
            c=1;
            j=i;
            while(j > 1)
            {
                if(j % 2==0)
                    j = j/2;
                else
                    j = (3*j)+1;
                c++;
            }
            if(c>=s)
                s=c;
        }
        printf(" %d\n",s);
    }
    return 0;
}
*/
