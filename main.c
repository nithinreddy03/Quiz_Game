#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_QUESTION 256
#define MAX_ANSWER 128
#define TOTAL_QUESTIONS 5

typedef struct
{
    char question[MAX_QUESTION];
    char answerA[MAX_ANSWER];
    char answerB[MAX_ANSWER];
    char answerC[MAX_ANSWER];
    char answerD[MAX_ANSWER];
    char correct_answer;
} car_quiz_question;

int main(void)
{
    car_quiz_question car_quiz[TOTAL_QUESTIONS];

    strcpy(car_quiz[0].question, "What company produces the Mustang?");
    strcpy(car_quiz[0].answerA, "Ford");
    strcpy(car_quiz[0].answerB, "Chevrolet");
    strcpy(car_quiz[0].answerC, "Dodge");
    strcpy(car_quiz[0].answerD, "Toyota");
    car_quiz[0].correct_answer = 'A';

    strcpy(car_quiz[1].question, "What car is known as 'The Ultimate Driving Machine'?");
    strcpy(car_quiz[1].answerA, "Toyota Camry");
    strcpy(car_quiz[1].answerB, "BMW 3 Series");
    strcpy(car_quiz[1].answerC, "Audi A4");
    strcpy(car_quiz[1].answerD, "Mercedes-Benz C-Class");
    car_quiz[1].correct_answer = 'B';

    strcpy(car_quiz[2].question, "What is the top speed of a Bugatti Veyron?");
    strcpy(car_quiz[2].answerA, "200 mph");
    strcpy(car_quiz[2].answerB, "220 mph");
    strcpy(car_quiz[2].answerC, "250 mph");
    strcpy(car_quiz[2].answerD, "270 mph");
    car_quiz[2].correct_answer = 'C';

    strcpy(car_quiz[3].question, "Which car brand uses the slogan 'The Power of Dreams'?");
    strcpy(car_quiz[3].answerA, "Honda");
    strcpy(car_quiz[3].answerB, "Hyundai");
    strcpy(car_quiz[3].answerC, "Kia");
    strcpy(car_quiz[3].answerD, "Mazda");
    car_quiz[3].correct_answer = 'A';

    strcpy(car_quiz[4].question, "What year was the first Porsche 911 produced?");
    strcpy(car_quiz[4].answerA, "1955");
    strcpy(car_quiz[4].answerB, "1963");
    strcpy(car_quiz[4].answerC, "1971");
    strcpy(car_quiz[4].answerD, "1980");
    car_quiz[4].correct_answer = 'B';

    int total_correct = 0;
    char answer;

    for (int i = 0; i < TOTAL_QUESTIONS; i++)
    {
        printf("Question %d: %s\n\n", (i + 1), car_quiz[i].question);
        printf("A) %s\n", car_quiz[i].answerA);
        printf("B) %s\n", car_quiz[i].answerB);
        printf("C) %s\n", car_quiz[i].answerC);
        printf("D) %s\n", car_quiz[i].answerD);
        printf("\nEnter Answer (A, B, C, or D): ");
        scanf(" %c", &answer);

        if (toupper(answer) == car_quiz[i].correct_answer)
        {
            total_correct++;
            printf("\n\nCorrect Answer!");
        }
        else
        {
            printf("\n\nIncorrect Answer!");
            printf("\n\nThe correct answer was %c.", car_quiz[i].correct_answer);
        }

        printf("\n\n\n");
    }

    printf("%d/%d questions answered correctly", total_correct, TOTAL_QUESTIONS);
    printf(" (%.2f%%)\n\n", ((float)total_correct / TOTAL_QUESTIONS) * 100);

    return 0;
}
