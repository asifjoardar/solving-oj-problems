#include<stdio.h>
int main()
{
    int i,max,p,a[100];
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
            p=i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",p+1);
    return 0;
}
