#include<stdio.h>
int main()
{
    int i,n,count=0,count1=0;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]%2==0)
            count++;
        else
            count1++;
    }
    if(count==1)
    {
        for(i=0;i<n;i++)
        {
            if(b[i]%2==0){
                printf("%d\n",i+1);
                break;
            }
        }
    }
    else if(count1==1)
        {
        for(i=0;i<n;i++)
        {
            if(b[i]%2==1){
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
