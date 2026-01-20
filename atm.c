#include <stdio.h>

int main()
{

    int balance = 500;

    while (1)
    {
        printf("***********************Welcome to the ATM\n. Available operations:\n 1. Check Balance\n 2. Deposit Money \n3. Withdraw Money\n 4. Exit\n \n ***********************");

        int userInput[40];
        printf("Select an options\n");
        scanf("%d", &userInput);

        if (userInput == 1)
        {
            printf("Your balance is : %d/n", balance);
        }
        else if (userInput == 2)
        {
            int despositMoney;
            printf("How much money you want to deposit: \n");
            scanf("%d", &despositMoney);
            despositMoney += balance;
        }
        else if (userInput == 3)
        {
            int withdraw;
            printf("How much money do you want to with draw ? : \n");
            scanf("%d", &withdraw);
            withdraw -= balance;
        }
        else if (userInput == 4)
        {
            printf("Thanks for using the ATM card \n ");
            break;
        }
        else
        {
            printf("Invalid operations!");
        };
        return 0;
    };
}
