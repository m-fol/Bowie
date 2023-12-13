#include <stdio.h>
#include <ctype.h>

#define MEMORY_SIZE 30000

int main() {
    char tape[MEMORY_SIZE] = {0};
    int ptr = 0;
    int instruction;
    char nextChar;

    while ((instruction = getchar()) != EOF) {
        if (isspace(instruction)) {
            continue;
        }

        //printf("Processing: %c\n", instruction);

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
                        // printf("Inside loop C: %c\n", nextChar);
                        if (nextChar == 'C' || nextChar == 'c') {
                            nesting++;
                        } else if (nextChar == 'h' || nextChar == 'H') {
                            nesting--;
                        } else if (nextChar == EOF) {
                            fprintf(stderr, "Error: Unexpected EOF\n");
                            return 1;  // Exit with an error code
                        }
                    }
                }
                break;
            case 'R':
                if (tape[ptr] != 0) {
                    int nesting = 1;
                    while (nesting > 0) {
                        nextChar = getchar();
                        // printf("Inside loop R: %c\n", nextChar);
                        if (nextChar == 'R' || nextChar == 'r') {
                            nesting++;
                        } else if (nextChar == 'e' || nextChar == 'E') {
                            nesting--;
                        } else if (nextChar == 'N' || nextChar == 'n') {
                            // Ignore 'N' and 'n' to prevent ENQ interpretation
                        } else if (nextChar == EOF) {
                            fprintf(stderr, "Error: Unexpected EOF\n");
                            return 1;  // Exit with an error code
                        }
                    }
                }
                break;
        }
    }

    return 0;
}
