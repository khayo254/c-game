#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef QUIZ_H
#define QUIZ_H

#define NUM_QUESTIONS 5
#define NUM_OPTIONS 4
#define QUESTION_TIME_LIMIT 10

typedef struct 
{
    char question[100];
    char options[NUM_OPTIONS][100];
    int correctOption;
} Question;

void clearScreen();
void displayQuestion(Question question);
int getRandomQuestionIndex();
int getUserChoice();
int playQuiz();

#endif