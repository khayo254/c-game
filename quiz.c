#include "quiz.h"

Question questions[NUM_QUESTIONS] = {
    {
        "What is the capital of France?",
        {"1. London", "2. Paris", "3. Rome", "4. Madrid"},
        2
    },
    {
        "What is the largest planet in our solar system?",
        {"1. Jupiter", "2. Mars", "3. Earth", "4. Saturn"},
        1
    },
    {
        "Which programming language is known as the 'mother of all languages'?",
        {"1. C", "2. Java", "3. Assembly", "4. Python"},
        3
    },
    {
        "What is the chemical symbol for gold?",
        {"1. Go", "2. Au", "3. Ag", "4. Gd"},
        2
    },
    {
        "Who painted the Mona Lisa?",
        {"1. Vincent van Gogh", "2. Leonardo da Vinci", "3. Pablo Picasso", "4. Claude Monet"},
        2
    }
};

void clearScreen()
{
    system("clear");
}

void displayQuestion(Question question)
{
    printf("%s\n", question.question);
    for (int i = 0; i < NUM_OPTIONS; i++) {
        printf("%s\n", question.options[i]);
    }
}

int getRandomQuestionIndex()
{
    return rand() % NUM_QUESTIONS;
}