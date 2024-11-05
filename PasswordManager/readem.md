# 🔒 Password Management System 🔒

Welcome to the **Password Management System**! This program allows users to securely store and manage passwords for different services, with features like encryption, password strength checking, and secure file storage.

## Project Structure

```bash
PasswordManager/
├── main.c               // Main program file
├── password_manager.c   // Core functions for password management
├── password_manager.h   // Header file with function prototypes
├── tests.c              // Test cases for functions
├── README.md            // Project documentation
└── Makefile             // Compile and build instructions
└── data.txt             // file will act as the storage for service names and encrypted passwords

```
## Features

- **User Authentication**: Log in before accessing the password manager.
- **Add/View/Delete Passwords**: Manage passwords with ease.
- **Password Encryption**: Protect stored passwords with encryption.
- **Password Strength Checker**: Ensure passwords are strong and secure.

## Explanation

- **Encryption:** Uses XOR encryption to obfuscate passwords.
- **File Handling:** Reads/writes to data.txt to store and retrieve passwords.
- **User Authentication:** A basic hard-coded check for demonstration.
- **Testing:** Simple functions to verify the core functionalities in tests.c.

## How to Compile and Run

Use the Makefile to compile:
```bash
make
```

Run the program:
```bash
./PasswordManager
```

## Tests

Run the tests to verify functionality:
```bash
./tests
```

---

## Usage

1. Log in with your username and password.
2. Choose to add, view, or delete passwords.
3. All passwords are encrypted and stored securely in `data.txt`.

---

### 🔐 Security Notice
*This project demonstrates basic password management. For production, use advanced encryption libraries and secure password hashing methods.*

---
