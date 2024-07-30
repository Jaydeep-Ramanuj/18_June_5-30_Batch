#include <stdio.h>

void main()
{
    // *
    // **
    // ***
    // ****
    // ******
    // ******
    // ****
    // ***
    // **
    // *

    int counter = 1;

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            // for (int k = 5; k >= counter; k--)
            for (int k = 5; k > i - 5; k--)
            {
                printf("*");
            }
            // counter++;
        }
        printf("\n");
    }
}