#include<stdio.h>
int main()
{
    int S=12;
    float a[12][12],sum=0,ave;
    int i,j,count=0,b=0;
    char ch[2];
    scanf("%s",&ch[0]);
    for(i=0;i<S;i++)
    {
        for(j=0;j<S;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=11;i>0;i--)
        {
            for(j=11;j>b;j--)
            {
                sum=sum+a[i][j];
                count++;
            }
            b++;
        }
    if(ch[0]=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(ch[0]=='M')
    {
        ave=sum/count;
        printf("%.1f\n",ave);
    }
    return 0;
}
