// Create a program to write delete and rename the data file using remove and rename command;

#include <stdio.h>
int main()
{

    remove("oldFile.txt");
    rename("olfFile.txt", "newFile.txt");
    printf("File delete and Rename successfully");

    return 0;
};
