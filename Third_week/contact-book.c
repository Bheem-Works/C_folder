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
        else if (choice == 3)
        {
            char searchName[50];
            int found = 0;
            printf("\n==== Search Contact ====\n");
            printf("Enter the Name to search: ");
            scanf("%s", searchName);

            for (int i = 0; i < count; i++)
            {
                if (strcmp(cb[i].name, searchName) == 0)
                {
                    printf("\nContact Found!\n");
                    printf("Name: %s\nPhone: %s\nEmail: %s\n", cb[i].name, cb[i].phoneNumber, cb[i].email);
                    found = 1;
                    break; // Vetepachi loop banda gardine
                }
            }

            if (!found)
            {
                printf("Contact not found!\n");
            }
        }
        else if (choice == 4)
        {
            char deleteName[50];
            int found = 0;

            printf("\n==== Delete Contact ====\n");
            printf("Enter the Name to delete: ");
            scanf("%s", deleteName);

            for (int i = 0; i < count; i++)
            {

                if (strcmp(cb[i].name, deleteName) == 0)
                {
                    for (int j = 0; j < count - 1; j++)
                    {
                        cb[j] = cb[j + 1];
                    }
                    count--;
                    found = 1;
                    printf("Contact delete successfully!");
                    break;
                }
            }
            if (!found)
            {
                printf("Contact can not be foun with that name! \n");
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

/*
    How to delete the positions from the array
{
    int arr[] = {10,20,30,40,50};

    int n = 5;
    int pos = 3;

    if(pos < 1 || pos > n){
        printf("Invalid positions");
    }
    else
    {
        for(int i = pos - 1; i < n-1; i++){
            arr[i] = arr[i+1];
            }
            n--;

            printf("Array declaration");
        for(int = 0; i < n; i++){
            printf("%d",arr[i]);
                }
    }
*/