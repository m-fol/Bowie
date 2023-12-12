#include <stdio.h>

#include <stdio.h>

#define MEMORY_SIZE 30000

int main() {
    char tape[MEMORY_SIZE] = {0};
    int ptr = 0;
    char instruction;

    while ((instruction = getchar()) != EOF) {
        switch (instruction) {
            case 'H':
                putchar(tape[ptr]);
                break;
            case 'L':
                tape[ptr] = getchar();
                break;
        }
    }

    return 0;
}
