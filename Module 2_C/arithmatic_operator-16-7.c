#include <stdio.h>


void main(){

int num1,num2;

// scanf(), it helps us to get user input

//printf("Enter your number:");
//scanf("%d",&num1);
//
//printf("%d",num1);


printf("Enter first number: ");
scanf("%d",&num1);
printf("\nEnter second number: ");
scanf("%d",&num2);

printf("\nSummation of %d and %d is: %d",num1,num2,num1+num2);
printf("\nSubtraction of %d and %d is: %d",num1,num2,num1-num2);
printf("\nMultiplication of %d and %d is: %d",num1,num2,num1*num2);
printf("\nDivision of %d and %d is: %.2f",num1,num2, (float) num1/num2);
printf("\nModulo of %d and %d is: %d",num1,num2,  num1%num2);

}
