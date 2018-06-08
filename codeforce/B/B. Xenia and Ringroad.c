#include<stdio.h>
int main()
{
    long long int count=0,i,a,b,p=0,q=1;;
    scanf("%I64d%I64d",&a,&b);
    int c[b];
    for(i=0;i<b;i++)
        scanf("%d",&c[i]);
    count=c[0]-1;
    for(i=1;i<b;i++)
    {
        if(c[i]<c[i-1]){q=0;p=0;
            count+=a-c[i-1]+c[i];}
        else if(c[i]>c[i-1]){q=0;p=0;
            count=count+(c[i]-c[i-1]);}
        else if(q==1)
            p=1;
    }
    if(p==0)
    printf("%I64d\n",count);
    else
    printf("0\n");
    return 0;
}
