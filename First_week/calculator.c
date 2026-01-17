#include <stdio.h>
#include <string.h>

void calculator();

int main()
{
    char prayogkarta_input[40];

    // While loop suru bhayo
    while (1)
    {
        printf("\n--- Calculator Menu ---\n");
        printf("Calculator chalauna 'y' thichnus, banda garna 'n' thichnus,\n exit type garnush bahira janu ko lagi : ");
        scanf("%s", prayogkarta_input);

        if (strcmp(prayogkarta_input, "y") == 0)
        {
            calculator(); // Calculator function call huncha
        }
        else if (strcmp(prayogkarta_input, "n") == 0)
        {
            printf("Program banda hudai cha. Dhanyabaad!\n");
            break; // Loop bata bahira nikalcha
        }
        else if (strcmp(prayogkarta_input, "exit") == 0)
        {
            printf("Thanks for using the calculator");
            break;
        }
        else
        {
            printf("Galti input! Kripaya 'y' ki 'n' matra thichnus.\n");
        }
    }

    return 0;
}

void calculator()
{
    int ka, kha;
    char chinah[3];

    printf("\n--- Naya Calculation ---\n");
    printf("'a' ma value rakhnush : ");
    scanf("%d", &ka);

    printf("'b' ko value rakhnush : ");
    scanf("%d", &kha);

    printf("Chinah (+, -, *, /): ");
    scanf("%s", chinah);

    if (strcmp(chinah, "+") == 0)
        printf("Result: %d\n", ka + kha);
    else if (strcmp(chinah, "-") == 0)
        printf("Result: %d\n", ka - kha);
    else if (strcmp(chinah, "*") == 0)
        printf("Result: %d\n", ka * kha);
    else if (strcmp(chinah, "/") == 0)
    {
        if (kha != 0)
            printf("Result: %d\n", ka / kha);
        else
            printf("Error: 0 le divide garna mildaina!\n");
    }
    else
        printf("Galti chinah!\n");
}