#include <stdio.h>
int main()
{

    while (1)
    {
        printf("=====================");
        printf("STUDENTS MARKS MANAGER\n");
        printf("======================\n");

        printf("1. Add student marks\n");
        printf("2. View student marks\n");
        printf("3. Calculate Result\n");
        printf("4. exit\n");
	printf("\n\n");

        int choice;
        printf("Enter your choice:_");
        scanf("%d", &choice);
	
	if(choice == 1){
		printf("====================");
		printf("ADD STUDENTS MARKS");
		printf("====================");
		printf("\n\n");

		char studentName[50];
		printf("Enter students name:");
		scanf("%s",studentName);

		int rollNo;
		printf("Enter the roll number:");
		scanf("%d",&rollNo);

		printf("Enter marks:\n");

		int math,science,english;
		printf("Math:");
		scanf("%d",&math);

		printf("Science:");
		scanf("%d",&science);

		printf("English:");
		scanf("%d",&english);
		printf("\n");

		printf("\n\n");

		printf("Student data saved Sucessfully");

	}
    }
    return 0;
}
