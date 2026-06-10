*This project has been created as part of the 42 curriculum by sabdalla.*

# get_next_line

## Description

**get_next_line** is a 42 project whose goal is to implement a function capable of reading a file descriptor line by line.

The function must return one complete line at a time, including the newline character (`\n`) when present, while handling files of any size and preserving unread data between calls.

## Instructions

### Compilation

Compile the project together with your test file:

```bash
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c
```

### Usage

```c
char *dest;

dest = get_next_line(fd);
```

Call `get_next_line(fd)` repeatedly until it returns `NULL`.

## Algorithm

The implementation uses a **static buffer** to store data that has been read but not yet returned.

1. Read chunks of data from the file descriptor using `read()`.
2. Append the newly read data to the stored buffer.
3. Search for a newline character.
4. If a complete line exists, extract it and return it.
5. Keep any remaining characters in the static buffer for the next call.
6. Continue until the end of the file is reached.

This approach avoids losing data between function calls and ensures that each line is returned exactly once.

## Resources

### References

* The `read(2)` manual page
* The POSIX file descriptor documentation
* 42 subject and peer evaluations
* C standard library documentation

### AI Usage

AI tools were used exclusively for:

* Debugging implementation issues.
* Understanding the behavior and edge cases of the `read()` function.
* Clarifying concepts related to file descriptors and buffer management.

The algorithm design, coding, testing, and final implementation were completed by the project author.
