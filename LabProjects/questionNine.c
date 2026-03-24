// write a program to find out the factorial number using recursive functions;

#include <stdio.h>
int factorial(int n)
{
	if (n == 0)
		return 1;
	n *factorial(n - 1);
};

int main()
{
	int num;
	printf("Enter the Number : ");
	scanf("%d", &num);
	printf("The factorial number is%d:\n", factorial(num));
	return 0;
};

// n == 0 return ,   n * factorial (n-1);