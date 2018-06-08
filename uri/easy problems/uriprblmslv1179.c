#include<stdio.h>
int main()
{
    int i,j,a[5],odd[5],n[15],p=0,o=0;
    for(i=0;i<15;i++)
    {
        scanf("%d",&n[i]);
    }
    for(j=0;j<15;j++)
    {
        if(n[j]%2==0)
        {
            a[p]=n[j];
            p++;
        }
        else
        {
            odd[o]=n[j];
            o++;
        }
        if(p==5)
        {
            for(i=0;i<5;i++)
            printf("par[%d] = %d\n",i,a[i]);
            p=0;
        }
        if(o==5)
        {
            for(i=0;i<5;i++)
                printf("impar[%d] = %d\n",i,odd[i]);
            o=0;
        }
    }
    for(j=0;j<o;j++)
        printf("impar[%d] = %d\n",j,odd[j]);
    for(j=0;j<p;j++)
        printf("par[%d] = %d\n",j,a[j]);
    return 0;
}
