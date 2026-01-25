#include <stdio.h>
#include <string.h>

int main()
{

	while (1)
	{
		printf("=====================");
		printf("STUDENTS MARKS MANAGER");
		printf("======================\n");
		printf("\n");

		printf("1. Add student marks\n");
		printf("2. View student marks\n");
		printf("3. Calculate Result\n");
		printf("4. exit\n");
		printf("\n\n");

		int choice;
		printf("Enter your choice:_");
		scanf("%d", &choice);
		printf("\n\n");

		char studentName[50];
		int rollNo, math, science, english;

		int total = math + science + english;
		int average = total / 3;

		if (choice == 1)
		{
			printf("====================");
			printf("ADD STUDENTS MARKS");
			printf("====================");
			printf("\n\n");

			printf("Enter students name:");
			scanf("%s", studentName);

			printf("Enter the roll number:");
			scanf("%d", &rollNo);

			printf("Enter marks:\n");

			printf("Math:");
			scanf("%d", &math);

			printf("Science:");
			scanf("%d", &science);

			printf("English:");
			scanf("%d", &english);
			printf("\n");

			printf("\n\n");

			printf("Student data saved Sucessfully");
			printf("\n\n");
		}
		else if (choice == 2)
		{
			printf("-----------");
			printf("STUDENTS MARKS LIST ");
			printf("-----------");

			printf("\n\n");

			printf("Name : %s\n", studentName);
			printf("Roll : %d\n", rollNo);
			printf("Math : %d\n", math);
			printf("Science : %d\n", science);
			printf("English: %d\n", english);
			printf("Total : %d\n", total);
			printf("Average : %d\n", average);
			printf("\n\n");
		}
		else if (choice == 3)
		{
			printf("----------");
			printf("STUDENT RESULT");
			printf("----------");
			printf("\n");

			printf("Name: %s\n", studentName);
			printf("Roll No	: %d", rollNo);
			printf("\n\n");

			printf("Total Mark : %d\n", total);
			printf("Average	: %d\n", average);
			printf("\n\n");

			char grade[5];
			char status[20];

			if (average >= 90)
			{
				strcpy(grade, "A");
				strcpy(status, "PASS");
				printf("Status %s", status);
			}
			else if (average >= 80)
			{
				strcpy(grade, "A");
				strcpy(status, "PASS");
			}
			else if (average >= 70)
			{
				strcpy(grade, "B+");
				strcpy(status, "PASS");
			}
			else if (average >= 60)
			{
				strcpy(grade, "B");
				strcpy(status, "PASS");
			}
			else if (average >= 50)
			{
				strcpy(grade, "C+");
				strcpy(status, "PASS");
			}
			else if (average >= 40)
			{
				strcpy(grade, "C");
				strcpy(status, "PASS");
			}
			else
			{
				strcpy(grade, "None");
				strcpy(status, "Fail");
			}

			printf("Grade%s:\n", grade);
			printf("Status%s:\n:", status);
			printf("\n\n");
		}
		else if (choice == 4)
		{
			printf("\n\n");
			printf("Thank you for using student marks manager\n");
			printf("Program closed");
			break;
		}
	};

	return 0;
};
