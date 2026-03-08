// 1. Write a program to input the age of 100 persons and
// count the number of persons in the age group between
// 50 to 60 using array.

#include <stdio.h>
int main()
{
    int age[100], count = 0, i;
    printf("Enter the age of 100 persons : \n");

    for (i = 0; i < 100; i++)
    {
        scanf("%d", &age[i]);
        if (age[i] >= 50 && age[i] <= 60)
        {
            count++;
        }
    }
    printf("Number of the persons aged 50 - 60 : %d", count);

    return 0;
}
