#include <stdio.h>

struct person
{
    char name[20];
    int age;
    int score;
};

void main()
{
    struct person p1;
    printf("Enter your name: ");
    gets(p1.name);
    printf("Enter your Age: ");
    scanf("%d", &p1.age);
    printf("Enter your score: ");
    scanf("%d", &p1.score);

    printf("\nName: %s", p1.name);
    printf("\nAge: %d", p1.age);
    printf("\nScore: %d", p1.score);
}