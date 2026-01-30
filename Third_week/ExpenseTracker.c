#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct expense
{
    char date[50];
    char category[50];
    float amount; // Changed to float for easier math
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
        printf("    Expense Tracker");
        printf("\n=======================\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. View Total Expenses\n");
        printf("4. Exit\n");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (count < 100)
            {
                printf("\nEnter Date (DD/MM/YYYY): ");
                scanf("%s", exp[count].date);

                printf("Enter Category: ");
                scanf(" %[^\n]s", exp[count].category); // Reads spaces

                printf("Enter Amount (Rs): ");
                scanf("%f", &exp[count].amount); // Direct float input

                printf("Enter Note: ");
                scanf(" %[^\n]s", exp[count].note);

                count++;
                printf("\nExpense added successfully!\n");
            }
            else
            {
                printf("\nMemory full!\n");
            }
        }
        else if (choice == 2)
        {
            printf("\n%-12s | %-15s | %-10s | %-15s\n", "Date", "Category", "Amount", "Note");
            printf("------------------------------------------------------------\n");
            for (int i = 0; i < count; i++)
            {
                printf("%-12s | %-15s | %-10.2f | %-15s\n",
                       exp[i].date, exp[i].category, exp[i].amount, exp[i].note);
            }
        }
        else if (choice == 3)
        {
            float total = 0;
            for (int i = 0; i < count; i++)
            {
                total += exp[i].amount;
            }
            printf("\nTotal Expenses to date: Rs. %.2f\n", total);
        }
        else if (choice == 4)
        {
            printf("Exiting... Goodbye!\n");
            break;
        }
        else
        {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}