# Bowie Esolang

### Commands:

- Ziggy: Initialize a variable (register) named Ziggy.
- Major Tom: Increment the value of Ziggy Stardust.
- Space Oddity: Decrement the value of Ziggy Stardust.
- Starman: Output the ASCII character represented by the current value of Ziggy Stardust.
- Life on Mars?: Input a character and store its ASCII value in Ziggy Stardust.
- Control Flow:
    > Ch-ch-changes: Conditionally execute the next command based on the current value of Ziggy Stardust. If Ziggy Stardust is zero, skip the next command; otherwise, proceed.
- Loops:
  > Rebel Rebel: Start a loop. Continue executing the commands inside the loop until Ziggy Stardust becomes zero.
  > <br> Heroes: End the loop.
- Comments: Any text following the # symbol is treated as a comment and ignored by the interpreter.

Sample "Hello, Bowie!" Program:
```bowie
# Hello, Bowie!
Ziggy Stardust
Ziggy Stardust
Ziggy Stardust
Ziggy Stardust
Ziggy Stardust
Rebel Rebel
    Starman
    Space Oddity
Heroes
```
This program initializes Ziggy Stardust to 5 and then enters a loop, printing the ASCII character corresponding to Ziggy Stardust and decrementing Ziggy Stardust until it reaches zero.
