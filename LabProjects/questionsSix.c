// Write a program to display the multiplication table of given number using functions;

#include <stdio.h>

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    table(num);
};

// the output will be like this
/*
    2 * 1 = 2
    2 * 3 = 6;
*/