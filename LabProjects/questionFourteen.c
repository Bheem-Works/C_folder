
// Question Fourteen : write a program to find out the factorial of given numbers using pointer;

int<stdio.h>

	int factorial(*int n)
{
	int fact = 1, i;
	for (i = 1; i <= n; i++)
	{
		fact = fact * n;
	};
	*n = fact;
}

int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	factorial(&num);
	printf("Factorial number:", n);
};
