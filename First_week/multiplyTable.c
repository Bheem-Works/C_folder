#include <stdio.h>

int main(){

	int number,count;
	printf("Enter the number:\n");
	scanf("%d",&number);
	
	for(count = 0; count <=10; count++){
		printf("%d * %d = %d",number,count,(number * count));
	} 

	return 0;
};
