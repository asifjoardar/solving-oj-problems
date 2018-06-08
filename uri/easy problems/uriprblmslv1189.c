#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char ch[2];
    int C,x,y,z,p=5,q=6;
    scanf("%s", &ch);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(z=7; z<=11;z++)
    {
        for(C=p; C<=q;C++) a+=M[z][C];

            p--;
            q++;
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
