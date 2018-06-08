/*#include<stdio.h>
int main()
{
    float a[12][12],sum=0,ave;
    int i,j,count=0,b=6;
    char ch[2];
    scanf("%s",&ch[0]);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
        {
            for(j=i+1;j<6;j++)
            {
                sum=sum+a[i][j];
                count++;
            }
        }
    for(i=4;i>=0;i--)
        {
            if(b==11)
                break;
            for(j=6;j<=b;j++)
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
}*/
#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y,z,p=10,q=1;
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(z=0; z<=4;z++)
    {
        for(C=q; C<=p;C++) a+=M[z][C];

            p--;
            q++;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}


