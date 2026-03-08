// 2. Write a program that takes the salary of the 100 employees and print the salary of the employees in ascending order using arrays.

#include <stdio.h>
int main()
{

    int salary[100], i, j, temp;

    printf("Enter the 100 salary salaries");

    for (i = 0; i < 100; i++)
    {
        scanf("%d", salary[i]);
    }

    // Setting it to an ascending orders;

    for (i = 0; i < 100; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            if (salary[i] > salary[j])
            {
                temp = salary[i];
                salary[i] = salary[j];
                salary[j] = temp;
            }
        }
    }

    // printing it out;

    for (i = 0; i < 100; i++)
    {
        printf("%d", salary[i]);
    }

    // Run the program.
    return 0;
}