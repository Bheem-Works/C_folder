#include <stdio.h>
#include <string.h>

struct contactBook
{
    char name[50];
    int phoneNumber[40];
    char email[50];
};

int main()

{

    struct contactBook cb;

    while (1)
    {
        printf("==========");
        printf("CONTACT BOOK");
        printf("=========");
        printf("\n\n");

        printf("1.Add new contact\n");
        printf("2.View all contact\n");
        printf("3.Search contact\n");
        printf("4.Delete contact\n");
        printf("5.Exit\n\n");

        int choice;
        printf("Enter your choice_:");
        scanf("%d", &choice);

        if (choice == 1)
        {
        }
        else if ()
        {
        };
    }

    return 0;
}