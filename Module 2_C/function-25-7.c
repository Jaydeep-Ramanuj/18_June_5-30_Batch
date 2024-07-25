#include <stdio.h>

// function declaration

// return_type function_name(paramater_data_type);

int mul(int, int);
void printSeries(int);

void main()
{
    printf("Now 1 to 50 will be printed");
    // function call
    printSeries(13);
    int mulResult = mul(10, 20);
    printf("\nResult: %d", mulResult);
}

// syntax

// function definition

// return_type function_name(parameters)
// {
//     // code to run when function executes
//     // code to run when function executes
//     // code to run when function executes
//     // code to run when function executes
//     // code to run when function executes
// }

// function call

// function_name(argument);

void printSeries(int num)
{
    for (int i = 0; i <= num; i++)
    {
        printf("\n%d", i);
    }
}

int mul(int num1, int num2)
{
    int result = num1 * num2;
    return result;
}