#include <stdio.h>

int main()
{

    int number = 40, guessNumber;

    while (1)
    {
        printf("Enter the number : \n");
        scanf("%d", &guessNumber);

        if (number > guessNumber)
        {
            printf("Your number is greater then guessNumber");
        }
        else if (number < guessNumber)
        {
            printf("Your number is less then the guessNumber");
        }
        else
        {
            printf("Your number is matched with the guessed number");
            break;
        }
        /* code */
    }

    return 0;
}