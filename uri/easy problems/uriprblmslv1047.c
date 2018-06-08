#include<stdio.h>
int main()
{
    int sh,sm,eh,em,fh,fm;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    if(sh==eh&&sm==em)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return 0;
    }
        if(sm<=em)
    {
        fm=em-sm;
    }
    else
    {
        em=em+60;
        fm=em-sm;
        eh=eh-1;
    }
    if(sh<=eh)
    {
        fh=eh-sh;
    }
    else
    {
        eh=eh+24;
        fh=eh-sh;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",fh,fm);
    return 0;
}
