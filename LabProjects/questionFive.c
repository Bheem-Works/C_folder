// write a program to find out the simple interest  by using function.

#include <stdio.h>

// Function to calculate simple interest (returns float)
float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100.0;
};

int main()
{
    float p, r, t, si;

    printf("Enter the principal, rate, time: ");
    scanf("%f %f %f", &p, &r, &t); // Read 3 values into p, r, t

    si = simpleInterest(p, r, t); // Call function with correct values

    printf("The Simple Interest is: %.2f\n", si); // Print the result

    return 0;
};