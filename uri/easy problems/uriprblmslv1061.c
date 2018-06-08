#include<stdio.h>
int main()
{
    char str[5],str1[5];
    int day,day1,h,h1,m,m1,s,s1;
    scanf("%s %d",s,&day1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("%s %d",s1,&day);
    scanf("%d : %d : %d", &h, &m, &s);
    if(s<s1)
    {
        s=s+60;
        s1=s-s1;
        m=m-1;
    }
    else
    {
        s1=s-s1;
    }
    if(m<m1)
    {
        m=m+60;
        m1=m-m1;
        h=h-1;
    }
    else
    {
        m1=m-m1;
    }
    if(h<h1)
    {
        h=h+24;
        h1=h-h1;
        day=day-1;
    }
    if(day1==day||day1>day)
        day1=0;
    else
        day1=day-day1;
    printf("%d dia(s)\n",day1);
    printf("%d hora(s)\n",h1);
    printf("%d minuto(s)\n",m1);
    printf("%d segundo(s)\n",s1);
    return 0;
}
