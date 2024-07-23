#include <stdio.h>

void main(){

    int dayNumber=10;

//if(dayNumber==1){
//    printf("Sunday");
//}else if(dayNumber==2)
//{
//    printf("Monday");
//}else if(dayNumber==3)
//{
//    printf("Tuesday");
//}else if(dayNumber==4)
//{
//    printf("Wednesday");
//}else if(dayNumber==5)
//{
//    printf("Thursday");
//}else if(dayNumber==6)
//{
//    printf("Friday");
//}else if(dayNumber==7)
//{
//    printf("Saturday");
//}else{
//    printf("Wrong input");
//}

// syntax

//switch(key){
//    case key_value_1:
//        // code
//        break;
//    case key_value_2:
//        //code
//        break;
//     default:
         //code
//}



switch(dayNumber){
    case 0:
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Wrong input");
}

}
