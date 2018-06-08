#include<stdio.h>
int main()
{
    int i,n,a;
    while(scanf("%d",&n))
    {
        int c1=0,c2=0;
        if(n==0)
            break;
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&a);
                if(a==0)
                    c1++;
                else if(a==1)
                    c2++;
            }
            printf("Mary won %d times and John won %d times\n",c1,c2);
        }
    }
    return 0;
}
