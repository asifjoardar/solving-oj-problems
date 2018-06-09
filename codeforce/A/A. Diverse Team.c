#include<stdio.h>
int main()
{
    int a,b,i,j,t,count=0,p=1;
    scanf("%d %d",&a,&b);
    int x[a],n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<a;i++)
    {
        if(x[i]!=0){
        for(j=i+1;j<a;j++)
        {
            if(x[i]==x[j])
            {
                x[j]=0;
            }
        }
        }
    }
    for(i=0;i<a;i++)
    {
        if(x[i]!=0)
            count++;
    }
    if(count>=b)
    {
        printf("YES\n");
        for(i=0;i<a;i++)
        {
            if(x[i]!=0&&p<=b){
                printf("%d ",i+1);
                p++;
            }
        }
        printf("\n");
    }
    else
        printf("NO\n");
    return 0;
}
