#include<stdio.h>
int main()
{
    int i,j,n,f;
    while(scanf("%d",&n)){
        f=0;
            if(n==0)
            break;
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]!=i)
        {
            j=a[i];
            if(a[j]!=i){
                f=1;
                break;
            }
        }
    }
    if(f==1)
        printf("not ambiguous\n");
    else
        printf("ambiguous\n");
    }
    return 0;
}
