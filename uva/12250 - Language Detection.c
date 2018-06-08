#include <stdio.h>
#include <string.h>
int main() {
    char t[50];
    int i = 0;
    while (scanf("%s", &t))
    {
        i++;
        if (strcmp(t,"#") == 0)
            break;
        else if (strcmp(t,"HOLA") == 0)
            printf("Case %d: SPANISH\n", i);
        else if (strcmp(t,"HELLO") == 0)
            printf("Case %d: ENGLISH\n", i);
        else if (strcmp(t,"HALLO") == 0)
            printf("Case %d: GERMAN\n", i);
        else if (strcmp(t,"BONJOUR") == 0)
            printf("Case %d: FRENCH\n", i);
        else if (strcmp(t,"CIAO") == 0)
            printf("Case %d: ITALIAN\n", i);
        else if (strcmp(t,"ZDRAVSTVUJTE") == 0)
            printf("Case %d: RUSSIAN\n", i);
        else
            printf("Case %d: UNKNOWN\n", i);
    }
    return 0;
}
