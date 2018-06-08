#include<stdio.h>
int main()
{
    int n,i,a,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        p=a;
        if(a>=38)
        {
            while(1)
            {
                if(a%5==0)
                {
                    break;
                }
                a=a+1;
            }
            if(a-p<3)
                printf("%d\n",a);
            else
                printf("%d\n",p);
        }
        else
            printf("%d\n",a);
    }
    return 0;
}

