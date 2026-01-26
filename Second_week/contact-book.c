#include <stdio.h>
#include <string.h>

struct contactBook
{
    char name[50];
    char phoneNumber[40];
    char email[50];
};

int main()

{

    struct contactBook cb[100];
    int count = 0;
    int choice;

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

        printf("Enter your choice_:");
        scanf("%d", &choice);

        if (choice == 1)
        {
            // Entering the name;
            printf("Enter The name : ");
            scanf("%s", cb[count].name);

            // Enter the phoneNumber;
            printf("Enter the phone number :");
            scanf("%s", cb[count].phoneNumber);

            // Entr the email;
            printf("Enter the Email :");
            scanf("%s", cb[count].email);

            // Incrementing the count;
            count++;
            printf("Contact added successfully\n");
        }
        else if (choice == 2)
        {
            printf("--contact list\n --");
            for (int i = 0; i < count; i++)
            {
                printf("number:%d \n Name:%s \nPhoneNumber: %s\n Email: %s\n", i + 1, cb[i].name, cb[i].phoneNumber, cb[i].email);
            }
        }
        else if (choice == 5)
        {
            printf("Thanks for using the contact book");
            break;
        }
    }

    return 0;
};