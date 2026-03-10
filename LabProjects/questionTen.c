// write a program to find out the sum 'n' natural numbers using recursion function.

#include <stdio.h>
int sum (int n){
	if (n == 0 ) return 1; 
	return n + (sum - 1);
};

int main(){
	int num; 
	printf("Enter the number:");
	scanf("%d",&num);
	printf("The sum recursive function : ",sum(num));
	return 0;
};
