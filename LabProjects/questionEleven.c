// write a program that take the roll_no,fname,lname of 5 students and print the records on screen using structure.

#include <stdio.h>

struct student
{
	int roll_no;
	int fname[20];
	int lname[20];
};

int main()
{
	struct student s[5];
	printf("Enter the roll_no,first_name,last_name of the students : /n");

	// Taking input of the students;
	for (int i = 0; i <= 5; i++)
	{
		printf("Enter the roll_no of student : \n");
		scanf("%d", &s[i].roll_no);

		printf("Enter the First name of student : \n");
		scanf("%s", &s[i].fname);

		printf("Enter the Last name of student : \n");
		scanf("%s", &s[i].lname);
	}

	// Printing data of the students;
	for (int i = 0; i <= 5; i++)
	{
		printf("Roll no : %d First name : %s Last name : %s", s[i].roll_no, s[i].fname, s[i].lname);
	}

	return 0;
};
