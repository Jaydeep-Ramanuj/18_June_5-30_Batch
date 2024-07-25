#include <stdio.h>

void main()
{

    // break, it will stop execution of current block and jump after current block

    // for (int i = 0; i < 10; i++)
    // {
    //     if (i > 5)
    //     {
    //         break;
    //     }
    //     printf("%d", i);
    // }
    // printf("This will be printed after for loop");

    // continue, it will skip current iteration but block will continue execution in next iteration
    for (int i = 0; i < 10; i++)
    {
        if (i >= 5 && i <= 7)
        {
            continue;
        }
        printf("%d", i);
    }
    printf("This will be printed after for loop");
}