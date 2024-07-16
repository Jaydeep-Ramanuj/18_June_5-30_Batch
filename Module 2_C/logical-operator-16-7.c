#include <stdio.h>

void main(){

int num1,num2;
int condition1,condition2;

printf("Enter first number: ");
scanf("%d",&num1);
printf("\nEnter second number: ");
scanf("%d",&num2);

// AND operator(&&), it returns true if all conditions are true,
// else returns false

// Truth table

//T && T => T
//T && F => F
//F && T => F
//F && F => F


// OR operator(||), it returns true if any conditions are true,
// else returns false

// Truth table

//T || T => T
//T || F => T
//F || T => T
//F || F => F


// NOT operator (!), it returns false if true, it returns true if false

// !T => F
// !F => T

condition1=num1<=num2;
condition2=num1>10;

printf("\n%d <= %d: %d",num1,num2,condition1);
printf("\n%d > 10: %d",num1,condition2);

printf("\ncondition1 && condition2: %d",(condition1 && condition2 ));
printf("\ncondition1 || condition2: %d",(condition1 || condition2 ));
printf("\n!condition1: %d",!condition1);
}
