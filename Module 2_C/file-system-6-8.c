#include <stdio.h>

void main()
{

    // syntax
    // FILE *file_object;

    FILE *file;
    char data[100];

    // fopen("file_path_along_with_extension","mode")

    // file = fopen("data.txt", "r");
    // file = fopen("data.txt", "w");
    file = fopen("data.txt", "a");

    // data[100] = fscanf(file, "%s", 50);
    // fgets(data, 500, file);
    // printf("%s", data);

    // r => readonly, it allows only read functions
    // w => write, we can write data in file, but it will replace already existing data in file
    // a => append, we can append data in file, it will not replace already existing data but will be added after it

    // r+, read + write
    // w+, read + write
    // a+, read + append

    // If you want to read,write or append binary values then we have modes like rb,wb,ab,rb+, etc.

    fprintf(file, "\nThis text will be appended");

    fclose(file);
}