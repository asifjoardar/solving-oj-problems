#include<stdio.h>
int main()
{
    int n,i,c1=0,c2=0,c3=0,c4=0,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1)
            c1++;
        else if(a[i]==2)
            c2++;
        else if(a[i]==3)
            c3++;
        else if(a[i]==4)
            c4++;
    }
    x=(c2/2)+c3+c4;
    c1=c1-c3;
    if(c2%2==1)
    {
        x++;
        c1=c1-2;
    }
    if(c1>0)
    {
        x=x+c1/4;
        if(c1%4!=0)
            x++;
    }
    printf("%d\n",x);
    return 0;
}
