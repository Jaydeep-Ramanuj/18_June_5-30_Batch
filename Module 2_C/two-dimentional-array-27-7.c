#include <stdio.h>

void main()
{
    // Two dimensional array / array of array
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][5] = {{1, 2, 3, 0, 0}, {4, 5, 6, 0, 0}, {7, 8, 9, 0, 0}};

    // Multi dimensional array

    int arr3[3][3][2] = {{{1, 1}, {2, 2}, {3, 3}}, {{4, 4}, {5, 50}, {6, 6}}, {{7, 7}, {8, 8}, {9, 9}}};
    // printf("%d", arr[1][1]);
    printf("%d", arr3[1][1][1]);

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
}