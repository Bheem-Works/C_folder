#include <stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    FILE *fp;
    // 1. Declare an ARRAY of 10 employees
    struct employee emp[10];

    fp = fopen("employee.txt", "w");
    if (fp == NULL)
        return 1; // Good practice: check if file opened

    printf("Enter id, name, and salary for 10 employees:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
        fprintf(fp, "%d %s %f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    fclose(fp);

    // 2. Re-open the file to READ
    fp = fopen("employee.txt", "r");

    printf("\nDisplaying Records:\n");
    for (int i = 0; i < 10; i++)
    {
        fscanf(fp, "%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
        printf("%d %s %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

    fclose(fp);
    return 0;
};
