/*#include<stdio.h>
int main()
{
    int X,Y;
    printf("Y = ");
    scanf("%d",&Y);
    X=(Y*Y);
    printf("X=%d\n",X);

}*/
#include<stdio.h>
int main(){
    char s[128];
    while(gets(s)!=EOF){
        puts(s);
    }
    return 0;
}
