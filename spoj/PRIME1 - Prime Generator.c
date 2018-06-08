/*#include<stdio.h>
int main()
{
    int n,i,j,a,b,k;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        scanf("%d%d",&a,&b);
        int p[b+1];
        for(i=1;i<=b;i++)
            p[i]=1;
        p[0]=0;
        p[1]=0;
        for(i=a;i<=b;i++)
        {
            if(p[i]==1)
            {
                for(j=a;j*i<=b;j++)
                    p[i*j]=0;
            }
        }
        for(i=a;i<=b;i++)
        {
            if(p[i]!=0)
                printf("%d\n",i);
        }
        if(k<n)
        printf("\n");
    }
    return 0;
}
*/
#include <stdio.h>
int asif(int n)
{
    int j, f=1;

    for(j=2; j <=sqrt(n); ++j)
    {
        if (n%j == 0)
        {
            f=0;
            break;
        }
    }
    return f;
}
int main()
{
    int n1,n2,i,f,n,k;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
    scanf("%d %d", &n1, &n2);
    if(n1==1)
        n1=2;
    for(i=n1; i<=n2; ++i)
    {
        f=asif(i);
        if(f== 1)
            printf("%d\n",i);
    }
    if(k<n)
        printf("\n");
    }
    return 0;
}
