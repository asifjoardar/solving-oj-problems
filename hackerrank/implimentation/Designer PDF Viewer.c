#include<stdio.h>
#include<string.h>
int main()
{
    int i,a[26],n,val;
    char s[11];
    for(i=0;i<26;i++)
        scanf("%d",&a[i]);
    scanf("%s",s);
    n=strlen(s);
    int max=-1;
    for(i=0;i<n;i++)
    {
        val=s[i]-96;
        if(a[val-1]>max)
            max=a[val-1];
    }
    printf("%d\n",1*n*max);
    return 0;
}
