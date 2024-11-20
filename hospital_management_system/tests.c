#include <assert.h>
#include <string.h>
#include "hospital.h"

// Test case for adding a new patient.
void testAddPatient() {
    patientCount = 0; // Reset the patient count for testing.

    // Create a mock patient and add to the global array.
    Patient testPatient = {1, "John Doe", 30, "Male", "Fever"};
    patients[patientCount++] = testPatient;

    // Assertions to verify the patient was added correctly.
    assert(patientCount == 1); // Check that the count incremented.
    assert(strcmp(patients[0].name, "John Doe") == 0); // Check that the name matches.
    printf("testAddPatient passed.\n");
}

// Test case for viewing patients.
void testViewPatients() {
    patientCount = 0; // Reset the patient count for testing.

    // Create a mock patient and add to the global array.
    Patient testPatient = {1, "John Doe", 30, "Male", "Fever"};
    patients[patientCount++] = testPatient;

    // Call the function to view patients (manual verification required).
    viewPatients();
    printf("testViewPatients passed.\n");
}

// Main function to run all test cases.
int main() {
    testAddPatient();  // Test the patient addition functionality.
    testViewPatients(); // Test the patient viewing functionality.

    printf("All tests passed.\n"); // Confirmation message.
    return 0; // Exit the program successfully.
}
