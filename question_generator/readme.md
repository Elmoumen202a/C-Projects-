# Random German Question Generator

This project is a simple C program that generates a random question in German. The questions are stored in an array, and each time the program runs, it picks a random question to display.

## Files

- `main.c`: The main file that runs the program.
- `questions.h`: Header file declaring functions.
- `questions.c`: Contains the array of questions and the function to return a random question.
- `tests.c`: A test file to verify that the random question generator works as expected.

## How to Compile

To compile the program, run:

```bash
gcc -o random_question main.c questions.c
```
To compile and run the tests:
```bash
    gcc -o tests tests.c questions.c
    ./tests
``` 
After compiling, run the program with:
```bash
    ./random_question

``` 

### How to Proceed

- **Implement**: Create the files and add the code as described.
- **Test**: Compile and run the tests to ensure everything works.
- **Expand**: You can add more questions or further functionality, such as input validation or question categories.

# License
This project is open-source and available under the MIT License.



