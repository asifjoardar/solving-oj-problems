#include<stdio.h>
int main()
{
    int r,c,n;
    double a[12][12],sum=0.0,av;
    char ch[2];
    scanf("%d",&n);
    scanf("%s",&ch[0]);
    for(r=0;r<12;r++)
    {
        for(c=0;c<12;c++)
            scanf("%lf",&a[r][c]);
    }
    for(r=0;r<12;r++)
    {
        sum=sum+a[r][n];
    }
    if(ch[0]=='S')
        printf("%.1lf\n",sum);
    else if(ch[0]=='M')
    {
        av=sum/12.0;
        printf("%.1lf\n",av);
    }
    return 0;
}

