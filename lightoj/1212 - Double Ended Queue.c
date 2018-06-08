#include<stdio.h>
int main()
{
    int a,b,n,i,j,c,k,l;
    char str[15];
    int y[101];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        int x[b];
        printf("Case %d:\n",i);
        int
        c=0;
        k=0;
        l=b-1;
        for(j=1;j<=b;j++)
        {
            scanf("%s",str);
            if(strcmp("pushLeft",str)==0)
            {
                scanf("%d",&x[k]);
                if(c<a){
                    printf("Pushed in left: %d\n",x[k]);
                    k++;
                    c=c+1;
                }
                else
                    printf("The queue is full\n");

            }
            else if(strcmp("pushRight",str)==0)
            {
                scanf("%d",&x[l]);
                if(c<a)
                {
                    printf("Pushed in right: %d\n",x[l]);
                    l--;
                    c=c+1;
                }
                else
                    printf("The queue is full\n");
            }
            else if(strcmp("popLeft",str)==0)
            {
                if(c<=0)
                    printf("The queue is empty\n");
                else
                {
                    k--;
                    c--;
                    printf("Popped from left: %d\n",x[k]);
                }
            }
            else if(strcmp("popRight",str)==0)
            {
                if(c<=0)
                    printf("The queue is empty\n");
                else
                {
                    l++;
                    c--;
                    printf("Popped from right: %d\n",x[l]);
                }
            }
        }
    }
    return 0;
}
