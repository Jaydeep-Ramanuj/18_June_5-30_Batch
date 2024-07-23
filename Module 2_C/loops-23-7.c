#include <stdio.h>


void main(){


//loop, It is used when we want to run some piece of code for multiple time

//1. for
//2. while
//3. do...while


//Entry control, It checks condition when entering code block, ex. for, while
//Exit control, It checks condition when exiting code block, do...while


//syntax

//for(initialization;condition;increment/decrement){
//    // code
//}


//for(int counter=1;counter<=108;counter++){
//    printf("\nRam %d",counter);
//}


//for(int counter=1008;counter>0;counter--){
//    printf("\nRam %d",counter);
//}

int result,oldResult;


//for(int i=0;i<=100;i++){
//    oldResult=result;
//    result=result+i;
//    printf("\n%d + %d = %d",oldResult,i,result);
//}

//printf("\nSum of 1 to 10 is: %d",result);


//syntax

//// initialization
//while(condition){
//    // code
//    // increment / decrement
//}

//int i=0;
//while(i<=100){
//    oldResult=result;
//    result=result+i;
//    printf("\n%d + %d = %d",oldResult,i,result);
//    i++;
//}

//int isServerRunning=1;

//while(isServerRunning){
//    printf("Server is listening");
//}



//syntax

// initialization
// do{
//    // code
//    // increment / decrement
//}
//while(condition)


int i=105;
do{
    oldResult=result;
    result=result+i;
    printf("\n%d + %d = %d",oldResult,i,result);
    i++;
}while(i<=100);

}
