
# Data Analysis

## Description

This project analyzes numerical data from a file. It computes the following statistics:
- Mean
- Median
- Standard Deviation
- Minimum and Maximum Values

## Project Structure:

- **data.txt** : Contains the dataset (comma-separated values or one value per line).
- **analyze_data.c** : The main program file with code and comments for explanations.
- **tests.c** :  Unit tests to validate the program's functionalities.
- **readme.md** :  Explanation of the project, its features, and usage instructions.

## How to Run
1. Add numerical data to `data.txt` (one value per line).
2. Compile the program using:
   ```bash
   gcc -o analyze analyze_data.c -lm
   ```
3. Run the program:
   ```bash
   ./analyze
   ```
   
## Running Tests

1. Compile the tests:
   ```bash
   gcc -o test tests.c -lm
   ```
2. Run the tests:
   ```bash
   ./test
   ```

## Example Output
```
Data Analysis Results:
Mean: 16.40
Median: 16.25
Standard Deviation: 4.10
Minimum Value: 10.50
Maximum Value: 22.10
```
