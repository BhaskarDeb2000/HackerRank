// Task 5: Pointers in C (Update value of storage)

#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d\n%d", &a, &b);
    int sum = a + b;
    int *pA = &sum;
    int sub = a - b;
    int *pB = &sub;
    if (sub < 0)
    {
        sub = -sub;
    }
    printf("%d\n%d\n", *pA, *pB);
    return 0;
}