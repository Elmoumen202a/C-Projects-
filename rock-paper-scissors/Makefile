# Compiler to use for building the program
CC = gcc

# Compiler flags for warnings and debugging
CFLAGS = -Wall -Wextra -g

# Name of the output executable file
OUTPUT = game

# List of source files
SRC = main.c

# List of test files
TEST_SRC = tests.c

# Rule to build the main program
# This creates the executable 'game' from the source file(s).
$(OUTPUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(SRC)

# Rule to build and run tests
# This compiles and runs the test program to ensure the code works correctly.
test: $(TEST_SRC)
	$(CC) $(CFLAGS) -o tests $(TEST_SRC)
	./tests

# Rule to clean up generated files
# This removes all compiled files and binaries.
clean:
	rm -f $(OUTPUT) tests *.o

# Phony targets
# These are not real files but commands the Makefile will execute.
.PHONY: clean test
