// Write a program which write the "welcome to nepal"in file. 
//

#include <stdio.h>
int main(){
	FILE *fp;

	fp = fopen("document.txt","w");
	fprintf(fp,"Welcome to the nepal");
	fclose(fp);
	printf("The text is written");

	return 0;
}
