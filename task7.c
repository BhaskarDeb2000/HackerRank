// // Task 7: For Loop in C

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int a, b;
//     scanf("%d\t%d", &a, &b);
//     for (int i = 1; i <= 1; i++)
//     {
//         if (a >= 1 && a <= 9)
//         {
//             if (a == 1)
//                 printf("one\n");
//             else if (a == 2)
//                 printf("two\n");
//             else if (a == 3)
//                 printf("three\n");
//             else if (a == 4)
//                 printf("four\n");
//             else if (a == 5)
//                 printf("five\n");
//             else if (a == 6)
//                 printf("six\n");
//             else if (a == 7)
//                 printf("seven\n");
//             else if (a == 8)
//                 printf("eight\n");
//             else if (a == 9)
//                 printf("nine\n");
//         }
//         else
//         {
//             printf("nine\n");
//         }
//         if (b >= 1 && b <= 9)
//         {
//             if (b == 1)
//                 printf("one\n");
//             else if (b == 2)
//                 printf("two\n");
//             else if (b == 3)
//                 printf("three\n");
//             else if (b == 4)
//                 printf("four\n");
//             else if (b == 5)
//                 printf("five\n");
//             else if (b == 6)
//                 printf("six\n");
//             else if (b == 7)
//                 printf("seven\n");
//             else if (b == 8)
//                 printf("eight\n");
//             else if (b == 9)
//                 printf("nine\n");
//         }
//         else
//         {
//             printf("nine\n");
//         }
//         if (a % 2 == 0)
//         {
//             printf("even\n");
//         }
//         else
//         {
//             printf("odd\n");
//         }

//         if (b % 2 == 0)
//         {
//             printf("even\n");
//         }
//         else
//         {
//             printf("odd\n");
//         }
//         // printf("%d\n%d", a, b);
//     }

//     return 0;
// }

// // Reusable Funciton

// #include <stdio.h>

// // Function to convert a number to its English representation
// void number_to_word(int num)
// {
//     // Array to store English representations of numbers from 0 to 9
//     char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//     // If num is between 0 and 9, print its English representation
//     if (num >= 0 && num <= 9)
//     {
//         printf("%s\n", words[num]);
//     }
// }

// // Function to check if a number is even
// int is_even(int num)
// {
//     return num % 2 == 0;
// }

// // Function to check if a number is odd
// int is_odd(int num)
// {
//     return num % 2 != 0;
// }

// int main()
// {
//     int num1, num2;

//     // Input
//     scanf("%d", &num1);
//     scanf("%d", &num2);

//     // Output
//     for (int num = num1; num <= num2; num++)
//     {
//         if (num < 10)
//         {
//             number_to_word(num);
//         }
//         else if (is_even(num))
//         {
//             printf("even\n");
//         }
//         else
//         {
//             printf("odd\n");
//         }
//     }

//     return 0;
// }

// Refined code

#include <stdio.h>
void wordReturn(int num)
{
    printf("%d", num);
    char *spell[] = {"zodu", "modu", "ram", "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("\n%s\n", spell[num]);
}
int main()
{
    int x, y;
    printf("X.global=%d\n", x);
    for (x = 0; x < 1; x++)
    {
        printf("X value=%d\n", x);
        printf("Put Int=");
        scanf("%d\t%d", &x, &y);
        printf("X2= %d\t%d", x, y);
        wordReturn(x);
        wordReturn(y);
        // if (x >= 0 && x <= 9)
        // {
        //     printf("\n%s\n", spell[x]);
        // }
        // if (y >= 0 && y <= 9)
        // {
        //     printf("\n%s\n", spell[y]);
        // }
        // else
        // {
        //     printf("nine\n");
        // }
        // if (x % 2 == 0)
        // {
        //     printf("Even");
        // }
        // if (y % 2 == 0)
        // {
        //     printf("even");
        // }

        // else

        // {
        //     printf("odd");
        // }
    }
    // for (int x = 0; x < 1; x++)
    // {
    //     printf("X3= %d\n", x);
    //     if (x % 2 == 0)
    //     {
    //         printf("Even");
    //     }
    //     else

    //     {
    //         printf("odd");
    //     }

    return 0;
}
