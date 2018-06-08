#include <stdio.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
        // Declare second integer, double, and String variables.
    int j;
    char s1[100];
    double d1;
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&j);
    scanf("%lf",&d1);
    getchar();
    gets(s1);
    //scanf("%s",s1);
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+j);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d+d1);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s\n",s,s1);


    return 0;
}


