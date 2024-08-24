# Get Next Line

**Get Next Line** is a project from the 42 coding school that involves writing a function, `get_next_line`, which reads a line from a file descriptor and returns it. This project aims to deepen your understanding of file I/O and memory management in C.

## Overview

The **Get Next Line** function reads from a file descriptor and returns the next line of text. It handles multiple file descriptors and reads input until the end of the file or an error occurs. The primary challenge is to manage memory effectively while reading from the file descriptor and returning each line until the end of the file.

## Function Prototype

```c
char *get_next_line(int fd);
```

fd: The file descriptor to read from.

## Project Requirements

No memory leaks: The function should properly allocate and free memory to avoid memory leaks.
Single Read: The function should read the minimum number of bytes necessary to achieve its goal.
Multiple File Descriptors: The function should handle multiple file descriptors, meaning it should be able to read from multiple files simultaneously.
Error Handling: The function should handle errors appropriately and return NULL on error or end of file.

## Compilation Rule
```bash
gcc -Wall -Wextra -Werror *.c -o gnl
```
## Testing
To test get_next_line, you can create various test cases with different file contents, including empty files, files with only newlines, large files, etc.
It's also crucial to test edge cases such as reading from a closed file descriptor, a negative file descriptor, or a file descriptor that points to an empty file.
