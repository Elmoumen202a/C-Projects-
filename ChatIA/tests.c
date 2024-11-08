#include <stdio.h>
#include <string.h>
#include "chatIA.c"

// Function to test chatbot responses
void testChatbotResponse() {
    char testInput1[] = "hello";
    char testInput2[] = "what is your name";
    char testInput3[] = "how are you";
    char testInput4[] = "unknown";

    printf("Testing Chatbot Responses:\n");

    printf("Input: %s\nExpected Output: Hello! How can I assist you today?\n", testInput1);
    getResponse(testInput1);

    printf("\nInput: %s\nExpected Output: I am ChatIA, your assistant chatbot.\n", testInput2);
    getResponse(testInput2);

    printf("\nInput: %s\nExpected Output: I'm here to assist you! How can I help?\n", testInput3);
    getResponse(testInput3);

    printf("\nInput: %s\nExpected Output: I'm sorry, I didn't understand that.\n", testInput4);
    getResponse(testInput4);
}

int main() {
    testChatbotResponse();
    return 0;
}
