# Define the compiler
CC = gcc  # Specifies the GNU C Compiler to use for compiling the program.

# Define compiler flags
CFLAGS = -Wall -Wextra -g  # Enables all compiler warnings, additional warnings, and debugging information.

# Define the target executable name
TARGET = study_plan  # Name of the executable for the main program.

# Define the test executable name
TEST_TARGET = tests  # Name of the executable for the test program.

# Build the main program
all: $(TARGET)  # Default target that builds the main program when 'make' is run.

# Rule to compile the main program
$(TARGET): study_plan.c  # Specifies that 'study_plan' depends on 'study_plan.c'.
	$(CC) $(CFLAGS) -o $(TARGET) study_plan.c  # Compiles 'study_plan.c' into the executable.

# Build the tests
tests: tests.c  # Specifies that 'tests' depends on 'tests.c'.
	$(CC) $(CFLAGS) -o $(TEST_TARGET) tests.c  # Compiles 'tests.c' into the test executable.

# Run tests
run-tests: tests  # Target to run the tests, ensures 'tests' is built first.
	./$(TEST_TARGET)  # Executes the test program.

# Clean up generated files
clean:  # Target to clean up the build.
	rm -f $(TARGET) $(TEST_TARGET)  # Removes the main and test executables if they exist.
