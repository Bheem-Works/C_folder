#include <stdio.h>
struct Five_book
{
    char title[];
    char author[];
    char publisher[];
    int price;
}

int
main()
{

    struct Five_book book;

    printf("Enter the title of the book : ");
    scanf(% s, book.title);

    return 0;
};