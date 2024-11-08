#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function prototypes
void startChat();
void getResponse(char *input);

int main() {
    printf("Welcome to ChatIA!\n");
    startChat(); // Start the chatbot
    return 0;
}

// Function to start the chat loop
void startChat() {
    char input[100];

    while (1) {
        printf("\nYou: ");
        fgets(input, 100, stdin); // Read user input
        input[strcspn(input, "\n")] = 0; // Remove newline character

        if (strcmp(input, "bye") == 0) {
            printf("ChatIA: Goodbye! Have a great day!\n");
            break;
        }

        getResponse(input); // Generate a response based on input
    }
}

// Function to generate responses based on keywords in the input
void getResponse(char *input) {
    if (strstr(input, "hello") != NULL || strstr(input, "hi") != NULL) {
        printf("ChatIA: Hello! How can I assist you today?\n");
    } else if (strstr(input, "name") != NULL) {
        printf("ChatIA: I am ChatIA, your assistant chatbot.\n");
    } else if (strstr(input, "how are you") != NULL) {
        printf("ChatIA: I'm here to assist you! How can I help?\n");
    } else {
        printf("ChatIA: I'm sorry, I didn't understand that.\n");
    }
}
