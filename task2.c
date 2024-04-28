//  Task 2:  Playing With Characters (Printing single character, word, Sentence)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[100];
    char senA[100];
    char senB[100];
    char senC[100];
    scanf("%c %s", &ch, s);
    scanf("%s %s %s", senA, senB, senC);
    printf("%c\n%s\n", ch, s);
    printf("%s %s %s\n", senA, senB, senC);
    return 0;
}