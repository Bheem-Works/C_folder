// Write a program to swap the numbers by using the pointer;
//

#include <stdio.h>
int swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
};

int main()
{
	int x, y;
	printf("Enter a number:");
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("After swap : %d %d", x, y);
	return 0;
};

int temp = a;
int a = b;
int b = temp;
