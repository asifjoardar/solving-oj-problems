#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0,n,a,j;
    while(scanf("%d",&n)!=EOF){
            count=0;
    char name[n][1001];
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%s",&name[i]);
        arr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0){
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])==0)
            {
                count++;
                arr[j]=1;
            }
        }
        }
    }
    a=n-count;
    printf("Falta(m) %d pomekon(s).\n",151-a);
    }

    return 0;
}
