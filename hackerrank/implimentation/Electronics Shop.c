#include<stdio.h>
int main()
{
    int max=-1,tp,kn,mn,i,j;
    scanf("%d%d%d",&tp,&kn,&mn);
    int k[kn],m[mn];
    for(i=0;i<kn;i++)
        scanf("%d",&k[i]);
    for(i=0;i<mn;i++)
        scanf("%d",&m[i]);
    for(i=0;i<kn;i++)
    {
        for(j=0;j<mn;j++)
        {
            if(k[i]+m[j]<=tp)
            {
                if(tp>max)
                    max=k[i]+m[j];
            }
        }
    }
    printf("%d\n",max);
    return 0;
}
