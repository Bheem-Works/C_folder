
// write a program to add name, roll_no and adress of some students until they press the 'yes' key;
#include <stdio.h>

int main(){
	FILE *fp;
	char name[20],choice[5],adress[50];
	int rollno;
	fp = fopen("student.txt","w");

	do{
		printf("Enter the name, roll_no, adress");
		scanf("%s %s %d",&rollno,name,adress);
		fprintf(fp,"%s %s %d \n",&rollno,name,adress);
		printf(" Want to add more : (Yes / No)\n");
		scanf("%s",choice);
	} while(strcmp(choice,"yes") == 0);
	fclose(fp);

	return 0; 
};
