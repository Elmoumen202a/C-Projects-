#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes (declare the functions before using them)
void read_data(const char *filename, double data[], int *size);
double calculate_mean(const double data[], int size);
double calculate_median(double data[], int size);
double calculate_std_dev(const double data[], int size, double mean);
void find_min_max(const double data[], int size, double *min, double *max);

// Main function: Entry point of the program
int main() {
    const char *filename = "data.txt"; // Input file containing the data
    double data[1000]; // Array to store the data
    int size = 0; // Variable to hold the number of data points

    // Step 1: Read data from the file
    read_data(filename, data, &size);

    // If the file is empty or not found, handle the error
    if (size == 0) {
        printf("No data found in the file.\n");
        return 1; // Exit the program with an error code
    }

    // Step 2: Calculate statistics
    double mean = calculate_mean(data, size); // Compute the mean
    double median = calculate_median(data, size); // Compute the median
    double std_dev = calculate_std_dev(data, size, mean); // Compute the standard deviation

    double min, max;
    find_min_max(data, size, &min, &max); // Find the minimum and maximum values

    // Step 3: Print the results
    printf("Data Analysis Results:\n");
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Standard Deviation: %.2f\n", std_dev);
    printf("Minimum Value: %.2f\n", min);
    printf("Maximum Value: %.2f\n", max);

    return 0; // Exit the program successfully
}

// Function to read data from a file
void read_data(const char *filename, double data[], int *size) {
    FILE *file = fopen(filename, "r"); // Open the file in read mode
    if (file == NULL) { // Check if the file exists
        perror("Error opening file");
        return;
    }

    // Read each value from the file and store it in the array
    while (fscanf(file, "%lf", &data[*size]) == 1) {
        (*size)++; // Increment the size for each valid value
    }

    fclose(file); // Close the file after reading
}

// Function to calculate the mean (average) of the data
double calculate_mean(const double data[], int size) {
    double sum = 0.0; // Initialize the sum to 0
    for (int i = 0; i < size; i++) {
        sum += data[i]; // Add each value to the sum
    }
    return sum / size; // Divide the sum by the number of values
}

// Function to calculate the median of the data
double calculate_median(double data[], int size) {
    // Sort the data in ascending order (simple bubble sort)
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (data[i] > data[j]) { // Swap if the current value is greater
                double temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    // If the size is even, take the average of the two middle values
    if (size % 2 == 0) {
        return (data[size / 2 - 1] + data[size / 2]) / 2;
    } else { // If the size is odd, return the middle value
        return data[size / 2];
    }
}

// Function to calculate the standard deviation of the data
double calculate_std_dev(const double data[], int size, double mean) {
    double sum = 0.0; // Initialize the sum of squared differences to 0
    for (int i = 0; i < size; i++) {
        sum += pow(data[i] - mean, 2); // Add the square of the difference
    }
    return sqrt(sum / size); // Take the square root of the average
}

// Function to find the minimum and maximum values in the data
void find_min_max(const double data[], int size, double *min, double *max) {
    *min = data[0]; // Initialize min with the first value
    *max = data[0]; // Initialize max with the first value
    for (int i = 1; i < size; i++) {
        if (data[i] < *min) { // Update min if a smaller value is found
            *min = data[i];
        }
        if (data[i] > *max) { // Update max if a larger value is found
            *max = data[i];
        }
    }
}
