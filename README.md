# Quiz Game

Welcome to the Quiz Game! This is a simple command-line quiz game where players answer multiple-choice questions and earn points based on their correct answers. The game includes a set of pre-defined questions, and players have a limited time to answer each question.

## Developer

This quiz game was developed by Michael Khayo.

## Features

- Multiple-choice questions: The game presents a series of multiple-choice questions to the player.
- Randomized questions: The questions are randomized for each game session, providing a unique experience each time.
- Time limit: Players have a limited amount of time to answer each question.
- Scoring: Players earn points for each correct answer within the time limit.
- Game over: At the end of the game, the player's total score is displayed.

## Getting Started

To run the quiz game, follow these steps:

1. Make sure you have a C compiler installed on your system.
2. Clone this repository to your local machine.
3. Open a terminal and navigate to the project directory.
4. Compile the source code using the following command:
   ```
   gcc main.c quiz.c quiz_utils.c -o quiz
   ````
5. Run the compiled executable:
   ```
   ./quiz
   ````

## Customization

You can customize the quiz game by modifying the following aspects:

- Questions: Edit the `questions` array in the `quiz.c` file to change or add new questions.
- Number of questions: Modify the `NUM_QUESTIONS` constant in the `quiz.h` file to control the total number of questions in the game.
- Time limit: Adjust the `QUESTION_TIME_LIMIT` constant in the `quiz.h` file to change the time limit for answering each question.
- User interface: Modify the code in the `displayQuestion` function in the `quiz.c` file to customize the way questions are displayed to the player.

## Contributing

Contributions to the quiz game are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.
