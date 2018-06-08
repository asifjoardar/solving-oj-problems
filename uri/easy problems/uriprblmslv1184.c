#include<stdio.h>
int main()
{
    float a[12][12],sum=0,ave;
    int i,j,count=0;
    char ch[2];
    scanf("%s",&ch[0]);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1;i<12;i++)
        {
            for(j=0;j<i;j++)
            {
                sum=sum+a[i][j];
                count++;
            }
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

