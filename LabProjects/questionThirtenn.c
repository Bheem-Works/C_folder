
// Questions Thirteen questions : Write a programs to calculate sum of two numbers by using the pointer;

#include <stdio.h>

int main()
{
	int a = 3;
	int b = 4;
	int *first = &a;
	int *second = &b;
	int sum = *first + *second;
	printf("The sum %d", sum);
	return 0;
};
