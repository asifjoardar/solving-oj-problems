#include<stdio.h>
int main()
{
    int a,b,c,i,r[6],max=-1;
    scanf("%d%d%d",&a,&b,&c);
    r[1]=a+b*c;
    r[2]=a*(b+c);
    r[3]=a*b*c;
    r[4]=(a+b)*c;
    r[5]=a+b+c;
    for(i=1;i<=5;i++)
    {
        if(r[i]>max)
            max=r[i];
    }
    printf("%d\n",max);
    return 0;
}
