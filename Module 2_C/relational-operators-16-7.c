#include  <stdio.h>

void main(){
int num1,num2;

printf("Enter first number: ");
scanf("%d",&num1);
printf("\nEnter second number: ");
scanf("%d",&num2);


// =, assignment operator, it assigns right side value to left side
// num1 = 10;


// ==, euqality operator, returns true if both values are same,
//otherwise returns false
printf("\nis %d euqals %d ?: %d",num1,num2,num1==num2);

// <, less than operator, it returns true if first value is less than second value,
// else returns false
printf("\nis %d less than %d ?: %d",num1, num2, num1<num2);


// <=, less than or equal to operator, it returns true if first value
// is less than or equal to second value,
// else returns false
printf("\nis %d less than or equal to %d ?: %d",num1, num2, num1<=num2);

// >, greater than operator, it returns true if first value is greater than second value,
// else returns false
printf("\nis %d greater than %d ?: %d",num1, num2, num1>num2);


// <=, greater than or equal to operator, it returns true if first value
// is greater than or equal to second value,
// else returns false
printf("\nis %d greater than or equal to %d ?: %d",num1, num2, num1>=num2);

// !=, not equal to operator, it returns true if both are values are not equal,
// else returns false
printf("\nis %d NOT equal to %d ?: %d",num1, num2, num1!=num2);
}
