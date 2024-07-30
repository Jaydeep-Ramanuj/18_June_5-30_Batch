#include <stdio.h>

void main()
{
    char name[20] = "Sanjay";

    // printf("%s", name);
    printf("Enter your name: ");
    // scanf("%s", &name);
    gets(name);
    // printf("Your name is: %s", name);
    puts(name);
}