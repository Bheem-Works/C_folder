#include <stdio.h>
int main()
{

    while (1)
    {

        printf("\n==========\n");
        printf("PRIME / PALINDROME CHECKER");
        printf("\n===========\n")
            printf("\n\n");

        printf("1. Check the prime number");
        printf("2. Check the palindrome number");
        printf("3. Exit");

        int choice;
        printf("\nEnter youur choice _:\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int primeNumber;
            printf("Enter the prime number: \n");
            scanf("%d", primeNumber);

            if (primeNumber <= 1)
            {
                printf("This is not prime number");
            }
            else if (primeNumber <= 3)
            {
                printf("Prime number");
            }
            for (int i = 0; i < primeNumber; i++)
            {
                if (primeNumber % i == 0)
                {
                    printf("Not an prime number");
                    break;
                }
            }
            printf("Prime number");
            return true;
        }
        else if (choice == 2)
        {

            // The youtube video link --- Revise it again and write down it into the cs note
            // https://youtu.be/7Xyjr9pVAYY?t=1180
            /*
                int n,r,s = 0;
                printf("enter the number : ");
                scanf("%d",&n);

                while(n!=0){
                    r = n / 10;
                    s = s * 10 + r;
                    n = n / 10;
                }
            */
        }
    }

    return 0;
}