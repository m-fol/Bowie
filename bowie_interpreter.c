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

        // printf("Processing: %c\n", instruction);

        switch (instruction) {
            case 'Z':
                // Ziggy: Initialize a variable (register) named Ziggy.
                tape[ptr] = 0;
                break;
            case 'M':
                // Major Tom: Increment the value of Ziggy.
                ++tape[ptr];
                break;
            case 'S':
                nextChar = getchar();
                if (nextChar == 't' || nextChar == 'T') {
                    // Starman: Output the ASCII character represented by the current value of Ziggy.
                    putchar(tape[ptr]);
                } else {
                    // Space Oddity: Decrement the value of Ziggy.
                    --tape[ptr];
                }
                break;
            case 'L':
                // Life on Mars?: Input a character and store its ASCII value in Ziggy.
                tape[ptr] = getchar();
                break;
            case 'C':
                if (tape[ptr] == 0) {
                    // Ch-ch-changes: Conditionally execute the next command based on the current value of Ziggy.
                    // If Ziggy is zero, skip the next command; otherwise, proceed.
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
                    // Rebl: Start a loop. Continue executing the commands inside the loop until Ziggy becomes zero.
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
