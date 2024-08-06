#include <stdio.h>

void main()
{
    FILE *file;
    char data[100];
    file = fopen("data.txt", "r");
    // data[100] = fscanf(file, "%s", 50);
    fgets(data, 500, file);
    printf("%s", data);
}