// write a program to find out the factorial numbers by using the functions;

#include <stdio.h>

int factNum(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
};

int main()
{
    int inputNum, result;

    printf("Enter the number");
    scanf("%d", &inputNum);

    printf("Factorial of %d is: %lld\n", inputNum, factNum(inputNum));

    return 0;
};