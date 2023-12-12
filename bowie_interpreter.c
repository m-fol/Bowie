#include <stdio.h>

#define MEMORY_SIZE 30000

int main() {
    char tape[MEMORY_SIZE] = {0};
    int ptr = 0;
    int instruction;

    while ((instruction = getchar()) != EOF) {
        char nextChar; // Variable to store the next character

        switch (instruction) {
            case 'Z':
                tape[ptr] = 0; // Ziggy Stardust
                break;
            case 'M':
                ++tape[ptr]; // Major Tom
                break;
            case 'S':
                nextChar = getchar();
                if (nextChar == 't' || nextChar == 'T') {
                    putchar(tape[ptr]); // Starman
                } else {
                    --tape[ptr]; // Space Oddity
                }
                break;
            case 'L':
                tape[ptr] = getchar(); // Life on Mars?
                break;
            case 'C':
                if (tape[ptr] == 0) {
                    int nesting = 1;
                    while (nesting > 0) {
                        nextChar = getchar();
                        if (nextChar == 'C' || nextChar == 'c') {
                            nesting++;
                        } else if (nextChar == 'h' || nextChar == 'H') {
                            nesting--;
                        } else if (nextChar == EOF) {
                            break; // Break out of the loop if EOF is encountered
                        }
                    }
                }
                break;
            case 'R':
                if (tape[ptr] != 0) {
                    int nesting = 1;
                    while (nesting > 0) {
                        nextChar = getchar();
                        if (nextChar == 'R' || nextChar == 'r') {
                            nesting++;
                        } else if (nextChar == 'e' || nextChar == 'E') {
                            nesting--;
                        } else if (nextChar == EOF) {
                            break; // Break out of the loop if EOF is encountered
                        }
                    }
                }
                break;
        }
    }

    return 0;
}
