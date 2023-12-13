# Bowie Esolang

### Commands:

- Ziggy: Initialize a variable (register) named Ziggy.
- Major Tom: Increment the value of Ziggy.
- Space Oddity: Decrement the value of Ziggy.
- Starman: Output the ASCII character represented by the current value of Ziggy.
- Life on Mars?: Input a character and store its ASCII value in Ziggy.
- Control Flow:
    > Ch-ch-changes: Conditionally execute the next command based on the current value of Ziggy. If Ziggy is zero, skip the next command; otherwise, proceed.
- Loops:
  > Rebl: Start a loop. Continue executing the commands inside the loop until Ziggy becomes zero.
  > <br> Heroes: End the loop.
- Comments: Any text following the # symbol is treated as a comment and ignored by the interpreter.

Sample "Hello, Bowie!" Program:
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
This program initializes Ziggy to 5 and then enters a loop, printing the ASCII character corresponding to Ziggy and decrementing Ziggy until it reaches zero.
