#include <stdio.h>


void main(){

int num=10;
float pi=3.14;
double longNumber=6841321641230141;


// Type conversion, sometimes we need to change the
// type of variable then we can use type conversion

// 1. Implicit type conversion, when type conversion happens by compiler
// 2. Explicit type conversion, when type conversion happens by user


printf("Num: %f",(float) num);
printf("\nPi: %d", (int) pi);
printf("\nLong Number: %f",(float) longNumber);

}
