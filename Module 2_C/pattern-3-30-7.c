#include <stdio.h>

void main()
{

    // *
    // ***
    // *****
    // *******
    // *********

    // for (int i = 1; i <= 9; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i % 2 != 0)
    //             printf("*");
    //     }
    //     if (i % 2 != 0)
    //         printf("\n");
    // }

    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}