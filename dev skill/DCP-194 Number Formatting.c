#include<stdio.h>
int main()
{
    char s[14];
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",s);
            if(s[0]=='0'){
                     if(s[2]=='9')  printf("88%s Banglalink\n",s);
                else if(s[2]=='7')  printf("88%s Grameenphone\n",s);
                else if(s[2]=='8')  printf("88%s Robi\n",s);
                else if(s[2]=='6')  printf("88%s Airtel\n",s);
                else if(s[2]=='5')  printf("88%s Teletalk\n",s);
                else if(s[2]=='1')  printf("88%s Citycell\n",s);
        }
            else if(s[0]=='8'){
                     if(s[4]=='9')  printf("%s Banglalink\n",s);
                else if(s[4]=='7')  printf("%s Grameenphone\n",s);
                else if(s[4]=='8')  printf("%s Robi\n",s);
                else if(s[4]=='6')  printf("%s Airtel\n",s);
                else if(s[4]=='5')  printf("%s Teletalk\n",s);
                else if(s[4]=='1')  printf("%s Citycell\n",s);
        }
    }
    return 0;
}
