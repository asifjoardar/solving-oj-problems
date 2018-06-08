#include<stdio.h>
int main()
{
    int a,b,c,i,sum=0,p,d;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&c);
        if(i!=b)
        {
            sum=sum+c;
        }
    }
    scanf("%d",&p);
    d=sum/2;
    if(p==d)
        printf("Bon Appetit\n");
    else{
            if(p>d)
        printf("%d\n",p-d);
    else
        printf("%d\n",d-p);
    }
    return 0;
}
