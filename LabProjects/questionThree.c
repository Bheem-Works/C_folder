// Write a program to find out the length of the string without using the build in functions;

#include <stdio.h>
int main()
{

    char str[100];
    int i = 0;

    printf("Enter the string name : ");
    scanf("%s", str);

    while (str[i] != '\0')
    { // \0 is the null terminator;
        i++;
    };

    printf("The length of the string is : %d", i);

    // Thanks;

    return 0;
}