# Compiler
CC = gcc

# Files
SRC = main.c password_manager.c tests.c
EXEC = PasswordManager
TEST_EXEC = tests

# Compile main program
all: $(SRC)
	$(CC) -o $(EXEC) main.c password_manager.c

# Compile test program
test: $(SRC)
	$(CC) -o $(TEST_EXEC) tests.c password_manager.c

# Clean up
clean:
	rm -f $(EXEC) $(TEST_EXEC)
