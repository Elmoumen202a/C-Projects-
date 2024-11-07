CC = gcc
CFLAGS = -Wall -g

all: quiz

quiz: main.o quiz.o
	$(CC) $(CFLAGS) -o quiz main.o quiz.o

main.o: main.c quiz.h
	$(CC) $(CFLAGS) -c main.c

quiz.o: quiz.c quiz.h
	$(CC) $(CFLAGS) -c quiz.c

clean:
	rm -f *.o quiz
