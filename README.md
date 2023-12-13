# ⭐ Bowie ⚡ Esolang 

## Overview

Bowie is an esoteric programming language (esolang) designed by @m-fol with a set of unique commands for expressive and unconventional programming. Named after the legendary musician David Bowie, this esolang introduces a set of commands inspired by his iconic songs.

## Commands

- **Ziggy:** Initialize a variable (register) named Ziggy.
- **Major Tom:** Increment the value of Ziggy.
- **Space Oddity:** Decrement the value of Ziggy.
- **Starman:** Output the ASCII character represented by the current value of Ziggy.
- **Life on Mars?:** Input a character and store its ASCII value in Ziggy.
- **Control Flow:**
  - **Ch-ch-changes:** Conditionally execute the next command based on the current value of Ziggy. If Ziggy is zero, skip the next command; otherwise, proceed.
- **Loops:**
  - **Rebl:** Start a loop. Continue executing the commands inside the loop until Ziggy becomes zero.
  - **Heroes:** End the loop.
- **Comments:** Any text following the # symbol is treated as a comment and ignored by the interpreter.

## Sample Program: "Hello, Bowie!"

```bowie
# Hello, Bowie!
Ziggy
Major Tom
Major Tom
Major Tom
Major Tom
Major Tom
Rebl
    Starman
    Space Oddity
Heroes
```

This program initializes Ziggy to 5 and then enters a loop, printing the ASCII character corresponding to Ziggy and decrementing Ziggy until it reaches zero. Embrace the unconventional nature of Bowie and let your creativity flow in this unique esolang.
