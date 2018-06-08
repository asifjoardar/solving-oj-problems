/*#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        printf("%d ",i);
        if(i%a==0)
            printf("\n");
    }
    return 0;
}*/
#include<stdio.h>

int main()
{
int a,b,c=1,d,e=1;
scanf("%d %d",&b,&d);
for(a=1;a<=d;a++){
    if(e==b){
        printf("%d\n",a);
        e=1;
    }
    else{
        printf("%d ",a);
        e++;
    }
}
return 0;
}
