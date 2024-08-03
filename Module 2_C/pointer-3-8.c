#include <stdio.h>

int sum(int *num1, int *num2);

void main()
{

    int i = 1;

    // pointer declaration

    int *ptr;
    printf("i: %d", i);
    printf("Address of i variable: %p", &i);

    i = 10;

    // &, address of, it is used to give address of specified variable
    // *, value / dereferencing, it is used to get value of specified address
    ptr = &i;

    printf("\nAddress store in *ptr: %p", ptr);

    int num1 = 10;
    int num2 = 20;

    // pass by value
    // printf("Result: %d", sum(10, 20));

    // pass by reference
    printf("\nResult: %d", sum(&num1, &num2));
}

int sum(int *num1, int *num2)
{

    printf("\nAddress of num1:  %p", &num1);
    printf("\nAddress of num2:  %p", &num2);

    printf("\nValue of num1:  %d", *num1);
    printf("\nValue of num2:  %d", *num2);

    return *num1 + *num2;
}