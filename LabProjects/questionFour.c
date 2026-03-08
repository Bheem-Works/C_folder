// Write a program for the following problem using built in functions.
// a, strlen() . b, strcat() c, strcmp(), strcpy();

#include <stdio.h>
#include <string.h> // Required for string functions

int main()
{

    char str1[50] = "Hello";
    char str2[50] = "World";
    char target[50];

    // a. strlen - Length
    printf("Length of str1: %zu\n", strlen(str1));

    // b. strrev - Reverse (Note: This is non-standard in some compilers)
    // If strrev isn't available, we'd do it manually, but here is the call:
    // strrev(str1);
    // printf("Reversed: %s\n", str1);

    // c. strcmp - Compare
    int result = strcmp(str1, str2);
    printf("Comparison result: %d\n", result);

    // d. strcpy - Copy
    strcpy(target, str1);
    printf("Copied string: %s\n", target);

    // e. strcat - Concatenate (Join)
    strcat(str1, str2);
    printf("Joined string: %s\n", str1);

    return 0;
}