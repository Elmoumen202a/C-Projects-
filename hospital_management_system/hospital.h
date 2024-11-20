#ifndef HOSPITAL_H
#define HOSPITAL_H

// Define constants for the maximum number of patients and doctors.
#define MAX_PATIENTS 100
#define MAX_DOCTORS 50

// Structure to store patient details.
typedef struct {
    int id;               // Unique ID for the patient.
    char name[50];        // Name of the patient.
    int age;              // Age of the patient.
    char gender[10];      // Gender of the patient.
    char ailment[100];    // Description of the patient's ailment.
} Patient;

// Structure to store doctor details.
typedef struct {
    int id;               // Unique ID for the doctor.
    char name[50];        // Name of the doctor.
    char specialization[50]; // Doctor's specialization (e.g., Cardiologist).
} Doctor;

// Structure to store appointment details.
typedef struct {
    int id;               // Unique ID for the appointment.
    int patientId;        // ID of the patient associated with the appointment.
    int doctorId;         // ID of the doctor associated with the appointment.
    char date[20];        // Appointment date (e.g., 2024-11-20).
    char time[10];        // Appointment time (e.g., 14:00).
} Appointment;

// Declare functions to manage the hospital system.
void addPatient();
void viewPatients();
void searchPatientById(int id);
void addDoctor();
void viewDoctors();
void addAppointment();
void viewAppointments();

#endif // HOSPITAL_H
