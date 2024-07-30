#include <stdio.h>
#include <string.h>

void main()
{
    char str[30], temp[30] = "temp";

    char ch1 = 'a';
    char ch2 = 'a';

    printf("Enter your string: ");
    gets(str);
    // printf("Length of entered string is: %d", strlen(str));

    // printf("\n--Before--");
    // printf("\nstr: %s", str);
    // printf("\ntemp: %s", temp);

    // strcpy(temp, str);

    // printf("\n--After--");
    // printf("\nstr: %s", str);
    // printf("\ntemp: %s", temp);

    // printf("\n Concatenated string is: %s", strcat(str, temp));
    // printf("\n Reversed string is: %s", strrev(str));

    printf("\n Uppercase string is: %s", strupr(str));
    printf("\n Lowercase string is: %s", strlwr(str));
}