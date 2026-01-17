
#include <stdio.h>
#include <string.h>

int main()
{
    //  दाता लिने ।
    char userInput[40];

    // यादि  युजर ले y लेखो भने परोसेस आनुसार युजरले आनुमाति पाऊछ। n लेखो भने पाऊदैन।
    printf("Do you want to enter the calc world : (y/n)\n: ");

    scanf("%s", userInput);

    printf(" The user say's ['%s']\n", userInput);

    // कमपयेर गरछ युजर ले y लेखेको छ या छैन ?

    // strcmp ले चाहि यदि true छ भने 0 दिनछ। नभै 1 दिनछ।
    if (strcmp(userInput, "y") == 0)
    {
        printf("okay you are entering the game");
    }
    else
    {
        printf("Sorry you are not allowed");
    }

    int a, b;

    printf("Enter the a : ");
    scanf("%d", &a);
    printf("Enter the b : ");
    scanf("%d", &b);

    // printing the variable number;
    printf("%d", a);
    printf("%d", b);
    return 0;
};

// Note : In the Comparing we use the strcmp;
// And strcmp return the 0 for true and the 1 for the false. Basically it returns the answer in the boolean.
// It compares with pointer vs character. And it stores int he arrays;
/// & user for the single character not for the multiple.