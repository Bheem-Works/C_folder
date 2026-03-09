// Write a program to check whether the give number is prime or composite;

#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % n == 0)
            return 0;
    }

    return 1;
};

int main()
{
    int number;
    printf("Enter the numbers");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("Prime number");
    }
    else
    {
        printf("composite number");
    }

    return 0;
}