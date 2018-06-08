#include <stdio.h>
int main()
{
    int year,p;
    scanf("%d",&year);
    if(year==1918)
        printf("26.03.1918\n");
    else if(year>1919){
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                p=1;
            else
                p=0;
        }
        else
            p=1;
    }
    else
        p=0;
    if(p==1)
        printf("12.03.%d\n",year);
    else
        printf("13.03.%d\n",year);
    }
    else
    {
        if(year%4==0)
            printf("13.03.%d\n",year);
        else
            printf("12.03.%d\n",year);
    }
    return 0;
}
