#include <stdio.h>


void main(){

// if age < 8, then half ticket
// if age <= 3, then free ticket
// if age > 8, then full ticket
// if age > 8 and status = D, then ticket-25
// if age > 8 and status = F, then ticket-10
// if age > 8 and status = M, then ticket+200


int ticketPrice=100;
int age;
char status;

printf("Enter your status: ");
scanf("%c",&status);

printf("Enter your age: ");
scanf("%d",&age);

//if(age<8 && age>3){
//    printf("Ticket price: %d", ticketPrice / 2);
//}else if(age<=3){
//    printf("Ticket price: 0");
//}else if(age>8 && status=='D'){
//    printf("Ticket price: %d",ticketPrice - 25);
//}else if(age>8 && status=='F'){
//    printf("Ticket price: %d",ticketPrice - 10);
//}else if(age>8 && status=='M'){
//    printf("Ticket price: %d Mufat ka kitna firega",ticketPrice + 200 );
//}else{
//    printf("Ticket price: 100");
//}


if(age<8){
        if(age == 0){
                printf("We don't give ticket to unborn");
        }else if(age<3){
           printf("Ticket price: 0");
        }
        else{
            printf("Ticket price: %d", ticketPrice / 2);
        }
}else{
    if(status=='M'){
        printf("Ticket price: %d Mufat ka kitna firega",ticketPrice + 200 );
    }else if(status=='D'){
        printf("Ticket price: %d",ticketPrice - 25);
    }else if(status=='F'){
        printf("Ticket price: %d",ticketPrice - 10);
    }else{
         printf("Ticket price: 100");
    }
}

}
