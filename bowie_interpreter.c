#include <stdio.h>

#define MEMORY_SIZE 30000

int main() {
    char tape[MEMORY_SIZE] = {0};
    int ptr = 0;

    char instruction;

    while ((instruction = getchar()) != EOF) {
        printf("Executing instruction: %c\n", instruction);  // Add this line
        switch (instruction) {
            case 'Z':
                tape[ptr] = 0; // Ziggy Stardust
                break;
            case 'M':
                ++tape[ptr]; // Major Tom
                break;
            case 'S':
                --tape[ptr]; // Space Oddity
                break;
            case 'H':
                putchar(tape[ptr]); // Starman
                break;
            case 'L':
                tape[ptr] = getchar(); // Life on Mars?
                break;
            case 'C':
                if (tape[ptr] == 0) {
                    int nesting = 1;
                    while (nesting > 0) {
                        instruction = getchar();
                            if (instruction == 'C') {
                                 nesting++;
                            } else if (instruction == 'H') {
                                nesting--;
                            } else if (instruction == EOF) {
                        break; // Break out of the loop if EOF is encountered
                            }
                    }
                }
            break;

            case 'R':
                if (tape[ptr] != 0) {
                    int nesting = 1;
                    while (nesting > 0) {
                        instruction = getchar();
                        if (instruction == 'R') {
                            nesting++;
                        } else if (instruction == 'E') {
                            nesting--;
                        } else if (instruction == EOF) {
                             break; // Break out of the loop if EOF is encountered
                        }
                    }
                }
            break;

                }
            break;
        }
    return 0;
}
