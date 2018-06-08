#include <stdio.h>
int main(){
    char str[1000];
    int i,j;
    while(gets(str)!= NULL)
     {
           for(j=0;str[j]!='\0';j++){
              if(str[j]>='A' && str[j]<='Z' ){
                if(str[j]<'N')
                    str[j]= str[j]+13;
                else
                    str[j]=(str[j]-13);
            }
            else if (str[j]>='a' && str[j]<='z' ){
              if(str[j]<'n')
                    str[j]= str[j]+13;
                else
                    str[j]=(str[j]-13);
            }
        }
        printf("%s\n",str);
    }
    return 0;
}
