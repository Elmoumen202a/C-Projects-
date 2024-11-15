#include <assert.h>
#include "analyze_data.c"

void test_calculate_mean() {
    double data[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size = 5;
    assert(calculate_mean(data, size) == 3.0);
}

void test_calculate_median() {
    double data1[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size1 = 5;
    assert(calculate_median(data1, size1) == 3.0);

    double data2[] = {1.0, 2.0, 3.0, 4.0};
    int size2 = 4;
    assert(calculate_median(data2, size2) == 2.5);
}

void test_calculate_std_dev() {
    double data[] = {2.0, 4.0, 4.0, 4.0, 5.0, 5.0, 7.0, 9.0};
    int size = 8;
    double mean = calculate_mean(data, size);
    assert((int)(calculate_std_dev(data, size, mean) * 100) == 200); // Approximation
}

int main() {
    test_calculate_mean();
    test_calculate_median();
    test_calculate_std_dev();

    printf("All tests passed successfully.\n");
    return 0;
}
