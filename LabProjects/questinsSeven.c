// write a program to find out the factorial numbers by using the functions;

#include <stdio.h>

int factorialNum(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
};

int main()
{

    int inputNumber;
    printf("Enter the input number : ");
    scanf("%d", &inputNumber);

    printf(" number of %d factorial is %lld:,factorialNum(inputNumber)");

    return 0;
};
