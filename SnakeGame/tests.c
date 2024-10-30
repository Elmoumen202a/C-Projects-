#include "main.c" // Import main game functions
#include <assert.h>

// Test that fruit is eaten and score increases
void test_score_increases_when_fruit_is_eaten() {
    int initial_score = score;
    x = fruitX; y = fruitY;  // Place snake on fruit
    logic();
    assert(score == initial_score + 10);
}

// Test.... , you can to add more tests as needed

int main() {
    setup();
    test_score_increases_when_fruit_is_eaten();
    printf("All tests passed!\n");
    return 0;
}
