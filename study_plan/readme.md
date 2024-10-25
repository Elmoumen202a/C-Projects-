
# 📚 Study Plan Manager

Welcome to the **Study Plan Manager**! This project helps you manage your study schedule directly from the command line. Whether it's tracking tasks, setting deadlines, or estimating study hours, this tool has got you covered! 🎯

---

## 📋 Project Overview

The Study Plan Manager allows you to:
- ➕ **Add tasks** with details like title, description, due date, and estimated study hours.
- ✏️ **Edit tasks** to stay updated with your changing goals.
- ❌ **Delete tasks** once they're completed or no longer needed.
- 👀 **View tasks** to monitor all planned activities at a glance.

---

## 🚀 Getting Started

### 1. Install Dependencies 📥

This project uses a few core utilities. Run `install.sh` to automatically install them:

```bash
./install.sh
```

### 2. Compile the Program 🛠️

Use `make` to compile the code:

```bash
make
```

This command will create an executable called `study_plan`.

### 3. Run the Program 🏃

After compiling, start the Study Plan Manager by running:

```bash
./study_plan
```

---

## 📜 Usage Guide

When you start the program, you'll see a menu like this:

```
--- Study Plan Menu ---
1. Add Task
2. Edit Task
3. Delete Task
4. View Tasks
5. Exit
```

Choose an option by entering the corresponding number to manage your study tasks. 📅

---

## 🧪 Running Tests

To verify each feature, compile and run the `tests.c` file:

```bash
gcc tests.c -o tests
./tests
```

This test script checks the main functionality (adding, editing, deleting, and viewing tasks) to ensure everything works smoothly.

---

## 📂 Project Structure

- **study_plan.c**: Core program code.
- **requirements.txt**: List of dependencies.
- **install.sh**: Script to install dependencies.
- **tests.c**: Unit tests for main features.
- **Makefile**: For easier compilation of the project.

---

## 🛠️ Using the Makefile

You can use the provided `Makefile` to simplify building and testing the project:

- **Compile the main program**: Run `make` or `make all`.
- **Run tests**: Run `make run-tests`.
- **Clean up**: Run `make clean` to remove all compiled files.

---

## 🎉 Enjoy Staying Organized!

Stay on top of your studies with this simple, efficient Study Plan Manager! 💪 Happy learning!
