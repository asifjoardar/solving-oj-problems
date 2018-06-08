#include<stdio.h>
int main()
 {
    int c0,c1,c2,c3,sum;
    while (scanf("%d %d %d %d", &c0, &c1, &c2, &c3)==4)
     {
         sum=0;
         if(c0==0 && c1==0 && c2==0 && c3==0)
         {
             break;
         }
         if(c0>c1)
            sum=sum+(c0-c1)*9;
         else
            sum=sum+(c0-c1+40)*9;
         if(c2>c1)
            sum=sum+(c2-c1)*9;
        else
            sum=sum+(c2-c1+40)*9;
        if(c2>c3)
            sum=sum+(c2-c3)*9;
        else
            sum=sum+(c2-c3+40)*9;
        sum=sum+1080;
        printf("%d\n",sum);
    }
    return 0;
}
