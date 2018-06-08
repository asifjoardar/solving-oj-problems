#include <stdio.h>
int main()
{
    int n,i,max,min=1000000,b;
    scanf("%d",&n);
    int a[n+1],d[n+1];
    for(i=0;i<=n;i++){
        a[i]=0;
        d[i]=i;
    }
    for(i=0;i<n;i++){
        scanf("%d",&b);
        if(b==1)
            a[1]++;
        else if(b==2)
            a[2]++;
        else if(b==3)
            a[3]++;
        else if(b==4)
            a[4]++;
        else if(b==5)
            a[5]++;
    }
    max=a[1];
    for(i=1;i<=n;i++)
    {
        if(max<a[i]){
            max=a[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==max)
        {
            if(i<min)
                min=i;
        }
    }
    printf("%d\n",min);
    return 0;
}

