# ChatIA

ChatIA is a simple chatbot program built in C that responds to basic user inputs. It recognizes keywords and provides predefined responses. The goal of this project is to demonstrate a basic text-based chatbot logic in C.

## Project Structure

```bash
ChatIA/
├── chatIA.c          # Main chatbot logic
├── tests.c           # Tests for the chatbot
├── Makefile          # To compile the program
└── readme.md         # Project documentation
```
## Project Structure

- **chatIA.c**: Contains the main chatbot logic.
- **tests.c**: Contains test cases for checking the chatbot’s responses.
- **Makefile**: Compiles the project.
- **README.md**: Documentation file.

## Features

- Responds to greetings like "hello" and "hi".
- Provides a name when asked.
- Responds to "how are you".
- Exits the chat when "bye" is typed.

## How to Run

1. Compile the program using the Makefile:
    ```bash
    make
    ```

2. Run the chatbot:
    ```bash
    ./chatIA
    ```

3. To run tests:
    ```bash
    ./tests
    ```

## Example Interaction

```bash
Welcome to ChatIA!

You: hello ChatIA: Hello! How can I assist you today?

You: what is your name? ChatIA: I am ChatIA, your assistant chatbot.

You: bye ChatIA: Goodbye! Have a great day!
```

## Contributing

Feel free to submit issues and suggestions to improve ChatIA!

## License

This project is licensed under the MIT License.

