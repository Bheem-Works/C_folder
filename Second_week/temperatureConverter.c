// Tempreature converter;

#include <stdio.h>
int main()
{

    printf("---------\n");
    printf("Tempreature Converter \n");
    printf("---------\n");

    float celsius, fahrnheit;
    printf("Enter the tempreature in celsius : ");
    scanf("%f", &celsius);
    fahrnheit = (celsius * 9 / 5) + 32;
    printf("Tempreature in Fahrnheit is : %.2f F\n", fahrnheit);

    return 0;
}