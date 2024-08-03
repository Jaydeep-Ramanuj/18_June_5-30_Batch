#include <stdio.h>

void main()
{
    int var = 10;
    int *ptr;
    int **pop;

    ptr = &var;

    pop = &ptr;

    printf("--Addresses--");
    printf("\nAddress of Var: %p", &var);
    printf("\nAddress of ptr: %p", &ptr);
    printf("\nAddress of pop: %p", &pop);
    printf("\n--Values--");
    printf("\nValue stored at Var: %d", var);
    printf("\nValue stored at ptr: %p", ptr);
    printf("\nValue stored at pop: %p", *pop);

    **pop = 30;

    printf("\n--After value update--");
    printf("\nAddress of Var: %d", var);
}