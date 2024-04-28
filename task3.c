// Task 3: Sum and Difference of Two Numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    float c;
    float d;
    scanf("%d %d\n", &a, &b);
    int sum = a + b;
    int sub = a - b;
    scanf("%1f %1f", c, d);
    float floatSum = c + d;
    float floatSub = c - d;
    printf("%d %d", sum, sub);
    printf("\n%1f %1f", floatSum, floatSub);
    return 0;
}