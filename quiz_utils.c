#include "quiz.h"

extern Question questions[NUM_QUESTIONS];

int getUserChoice() {
    int choice;
    printf("Enter your choice (1-%d): ", NUM_OPTIONS);
    scanf("%d", &choice);
    return choice;
}

int playQuiz() {
    int score = 0;
    srand(time(NULL));
  
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        clearScreen();
        Question question = questions[getRandomQuestionIndex()];
        displayQuestion(question);
      
        printf("Time remaining: %d seconds\n", QUESTION_TIME_LIMIT);
        time_t startTime = time(NULL);
      
        int choice = getUserChoice();
        time_t endTime = time(NULL);
        int elapsedTime = difftime(endTime, startTime);
      
        if (choice == question.correctOption && elapsedTime <= QUESTION_TIME_LIMIT) {
            score++;
            printf("Correct!\n");
        } else {
            printf("Incorrect!\n");
        }
      
        printf("Press enter to continue...");
        getchar();
        getchar();
    }
  
    return score;
}