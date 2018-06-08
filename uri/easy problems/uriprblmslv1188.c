#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char ch[2];
    int C,x,y,z,p=4;
    scanf("%s", &ch);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(z=1; z<=5;z++)
    {
         for(C=0; C<=z-1;C++)
            a+=M[z][C];
    }
    for(z=6; z<=10;z++)
    {
         for(C=p; C>=0;C--)
            a+=M[z][C];
            p--;
    }

    if(ch[0]=='S')
        printf("%.1lf\n",a);
    else if(ch[0]=='M')
    {
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}

