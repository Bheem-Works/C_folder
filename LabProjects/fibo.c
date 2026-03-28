#include <stdio.h>

int main()
{
    int i, n;
    int a = 0;
    int b = 1;
    int c;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    if (n >= 1)
    {
        printf("%d", a);
    }

    if (n >= 2)
    {
        printf(", %d", b);
    }

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
