#include "quiz.h"

int main ()
{
    clearScreen();
    printf("Welcome to the QGee!\n");
    printf("Press enter to start...");
    getchar();

    int totalScore = playQuiz();
  
    clearScreen();
    printf("Game over!\n");
    printf("Total score: %d/%d\n", totalScore, NUM_QUESTIONS);
  
    return 0;
}