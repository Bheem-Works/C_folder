
// Write a program that takes the roll_no,fname,lname and date of birth of 'n' numbers of the  the students and display he information on screen by using the nested structure.

#include <stdio.h>
struct dob
{
	int day;
	int month;
	int year;
};

struct student
{
	int roll_no;
	char fname[20];
	char lname[20];
	// Inserting the dob inside the strutuctre
	struct dob d; // dob as a 'd';
};

int main()
{
	int i, n;
	printf("Enter the students number:\n");
	scanf("%d", &n);
	struct student[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d %s %s %d %d %d", &s[i].roll_no, s[i].fname, s[i].lname,
			  &s[i].d.day, &s[i].d.month, &s[i].d.year);
	};

	// printing it out;
	printf("Student records:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d %s %s %d-%d-%d\n", s[i].roll_no, s[i].fname, s[i].lname,
			   s[i].d.day, s[i].d.month, s[i].d.year);
	}
	return 0;
};
// thanks this is the end of it.
