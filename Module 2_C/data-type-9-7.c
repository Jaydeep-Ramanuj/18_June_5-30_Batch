#include <stdio.h>


void main(){

// Primary Data types

// 1. void, it is used to define no data

// 2. int, it is used to store whole number,
// occupies 2 or 4 bytes, modifier => %d

//3. float, it is used to store decimal values,
// it occupies 4 bytes, modifier => %f

//4. double, it is used to large numbers,
// it occupies 8 to 10 bytes, modifier => %lf

// 5. char, it used to store single character,
// it occupies 1 byte, modifier => %c


int num=10;
printf("num: %d",num);

float num2=10.23;
printf("\nnum2: %f",num2);

float pi=3.14159265;
printf("\n pi with 6 floating point: %f",pi);
printf("\n pi with 4 floating point: %.4f",pi);
printf("\n pi with 4 floating point: %.2f",pi);

double distance=936463415165416841;
printf("\nDistance: %lf",distance);

char initial='j';
printf("\nInitial: %c",initial);

// sizeof(), it is used to get size of an data_type as well as variable

printf("\nsize of int is: %d bytes",sizeof(int));
printf("\nsize of float is: %d bytes",sizeof(float));
printf("\nsize of double is: %d bytes",sizeof(double));
printf("\nsize of char is: %d bytes",sizeof(char));

printf("\nsize of num is: %d bytes",sizeof(num));


//char name[4]="jay";
//printf("\nName: %s",name);
}







//general data types
//
//number => int, float, double
//text => string => sequence of chars
//charcter => single latter => char
//image => binary file
//audio => blob
//video => blob
//file => binary file => file
//yes / no => boolean => 1 (true)/ 0 (false)
