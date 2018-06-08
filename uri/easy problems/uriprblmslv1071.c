#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e=0,i;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=b;
        b=a;
        a=c;
    }
    for(i=(a+1);i<b;i++)
    {
        //d=i;
        if(i%2!=0)
        {
            e=e+i;
        }

    }
    printf("%d\n",e);
    return 0;
}
