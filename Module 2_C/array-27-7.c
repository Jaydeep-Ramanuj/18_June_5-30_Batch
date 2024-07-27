#include <stdio.h>

void main()
{

    // syntax

    // Array declaration

    // data_type array_name[array_length];

    int num[5];

    // Array Initialization

    // data_type array_name [array_length] = {array_item_1,array_item_2,array_item_3,...}

    int numbers[5] = {10, 20, 30, 40, 50};

    // printf("%d", numbers[2]);
    printf("\n---Before---");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", numbers[i]);
    }

    // Array value update

    numbers[2] = 300;
    printf("\n---After---");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", numbers[i]);
    }
}