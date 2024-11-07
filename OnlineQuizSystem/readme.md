# Online Quiz System

## Project Overview
The **Online Quiz System** is a simple console-based application built in C that allows users to take quizzes with multiple-choice questions. The program reads questions from a text file and evaluates the user's answers to calculate their score.

## Project Structure

```bash
OnlineQuizSystem/
├── main.c           # Main program file with the logic for the quiz
├── quiz.h           # Header file with function prototypes and definitions
├── quiz.c           # Separate file for quiz-related functions
├── questions.txt    # Text file to store quiz questions and answers
├── Makefile         # Makefile for compiling the project
└── readme.md        # Project documentation

```

## Features
- Console-based user interface
- Reads questions and answers from an external file (`questions.txt`)
- Supports multiple-choice questions
- Displays the user's score at the end of the quiz
- Basic error handling for file operations

## Files
- **main.c**: Contains the main logic for initializing and running the quiz.
- **quiz.h**: Header file with function prototypes and definitions.
- **quiz.c**: Implements quiz-related functions such as loading questions, displaying questions, and checking answers.
- **questions.txt**: Stores quiz questions in the format: `Question, Option1, Option2, Option3, Option4, CorrectAnswer`.
- **Makefile**: Facilitates compilation of the program.

## Setup and Compilation
1. Clone or download this repository.
2. Ensure you have a C compiler (e.g., `gcc`) installed.
3. Use the following commands to compile and run the program:

   ```bash
   make
   ./quiz
   ```

## Usage
1. Run the program using `./quiz`.
2. The program will display a series of questions with multiple-choice answers.
3. Enter the number corresponding to your chosen answer for each question.
4. At the end of the quiz, the program displays your score.

## File Format for Questions
The questions file (`questions.txt`) should be formatted as follows:

```plaintext
Question, Option1, Option2, Option3, Option4, CorrectAnswer
Example question?, optionA, optionB, optionC, optionD, 1
```

Each question should be on a new line, with answers separated by commas.

## Sample Output
```plaintext
Welcome to the Online Quiz System!
Question 1: What is the capital of France?
1. Berlin
2. London
3. Paris
4. Rome
Your answer: 3

Correct!

Your Score: 1/1
```

## Improvements and Future Enhancements
- Add a user login system to store and retrieve scores for each user.
- Implement a timer for each question.
- Add more types of questions, such as true/false or short answer.
- Store and retrieve questions from a database instead of a text file.

## License
This project is open-source and available under the MIT License.
