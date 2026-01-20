#include <stdio.h>

int main()
{

    int computer_number = 40, user_number;
    while (1)
    {
        printf("Enter the number between 0 to 50 :");
        scanf("%d", &user_number);
        printf("\n");
        if (computer_number > user_number)
        {
            printf("computer number is greater then: %d\n\n", user_number);
        }
        else if (computer_number < user_number)
        {
            printf("computer_number is less then: %d\n\n", user_number);
        }
        else
        {
            printf("'Mached'! Computer number is %d and user_number%d\n\n", computer_number, user_number);
            break;
        }
        /* code */
    }

    return 0;
}
