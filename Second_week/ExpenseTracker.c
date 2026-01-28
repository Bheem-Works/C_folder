#include <stdio.h>
#include <string.h>

struct expense
{
    char date[50];
    char category[50];
    char amount[50];
    char note[50];
};

int main()
{

    struct expense exp[100];
    int count = 0;
    int choice;

    while (1)
    {

        printf("\n=======================\n");
        printf("Expense Tracker");
        printf("\n====================\n\n");

        printf("1. Add Expense");
        printf("2. View All Expenses");
        printf("3. View Total Expenses");
        printf("4. Filter by category");
        printf("5. Exit");

        printf("\n\n");
        printf("Enter Choice _:");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\n---------\n");
            printf("Add Expense");
            printf("\n---------\n");

            printf("Enter Date (DD/MM/YYYY):");
            scanf("%s", exp[count].date);

            printf("Enter Category: ");
            scanf("%s", exp[count].category);

            printf("Enter Amount(Rs):");
            scanf("%s", exp[count].amount);

            printf("Enter Note (optinal):");
            scanf("%s", exp[count].note);

            printf("Expenses added successfully");

            count++;
        }
        else if (choice == 2)
        {
            float total;
            printf("\n----------\n");
            printf("Expense List");
            printf("\n----------\n");

            for (int i = 0; i < count; i++)
            {
                // Atof to convert the string to float;

                total += atof(exp[i].amount);
            }
            printf("Total Expense: %.2f\n", total);
        }

    }; // While close
    return 0;
};