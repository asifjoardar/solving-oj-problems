#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14159265359
float asif(float x1,float y1,float x2,float y2)
{
    float p,q;
    p=(x1-x2);q=(y1-y2);
    return sqrt((p*p)+(q*q));
}
int main()
{
    int n,i;
    float sum=0.0,p,q,r;
    scanf("%d%f",&n,&r);
    float a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%f%f",&a[i],&b[i]);
        if(i>0)
            sum=sum+asif(a[i],b[i],a[i-1],b[i-1]);
    }
    sum=sum+asif(a[n-1],b[n-1],a[0],b[0]);
    sum=sum+(2.0*PI*r);
    printf("%.2f\n",sum);
    return 0;
}
