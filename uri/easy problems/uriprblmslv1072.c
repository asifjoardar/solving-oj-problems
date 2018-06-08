#include<stdio.h>
int main()
{
    int n,a[100000],b=0,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=10 && a[i]<=20)
            b++;
        else
            c++;
    }
    printf("%d in\n",b);
    printf("%d out\n",c);
    return 0;
}
