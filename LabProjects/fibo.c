#include <stdio.h>
int main()
{

    int i, n;
    int a = 0;
    int b = 1;
    int c = a + b;

    printf("Enter the numbers of term");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 3; i <= n; i++)
    {
        printf("%d", c);
        a = b;
        b = c;
        c = a + b;
    };

    return 0;
}