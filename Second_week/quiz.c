#include <stdio.h>
#include <ctype.h>

int main()
{

    char question[][100] = {
        "1. What is the capital of France?\n(a) Berlin\n(b) Madrid\n(c) Paris\n(d) Rome\n",
        "2. Which planet is known as the Red Planet?\n(a) Earth\n(b) Mars\n(c) Jupiter\n(d) Saturn\n",
        "3. Who wrote 'Hamlet'?\n(a) Charles Dickens\n(b) Mark Twain\n(c) William Shakespeare\n(d) Jane Austen\n"};
    char answers[] = {'c', 'b', 'c'};

    int numberOfQuestions = sizeof(question) / sizeof(question[0]); // Used to find the length of the questions.

    printf("Number of Questions: %d\n", numberOfQuestions);

    char guess;

    int score = 0;

    printf("\n\n");
    printf("-------------------\n");
    printf("   QUIZ TIME!   \n");
    printf("-------------------\n\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("%s\n", question[i]);
        printf("\n");

        for (int j = (i * 4); j < (i * 4); j++)
        {
            printf("%s\n", answers[j]);
            printf("\n");
        }

        printf("Enter your answer :");
        scanf("%s", &guess);
        printf("\n");
        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf(" Correct! \n");
            printf("\n");
            score++;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    printf("--------------------\n");
    printf("Your score is : %d out of %d.\n", score, numberOfQuestions);
    printf("--------------------\n");

    return 0;
};