*This project has been created as part of the 42 curriculum by sabdalla.*

# ft_printf

## Description

`ft_printf` is a reimplementation of the standard C `printf()` function.  
The goal of this project is to learn how variadic functions work, how to parse a format string, and how to print formatted output using only the allowed functions.

The project produces a static library named `libftprintf.a` containing the function:

int	ft_printf(const char *format, ...);

It handles the following conversions:

- %c character
- %s string
- %p pointer in hexadecimal
- %d decimal integer
- %i integer
- %u unsigned decimal integer
- %x hexadecimal in lowercase
- %X hexadecimal in uppercase
- %% percent sign

## Instructions

Compile: make
This creates: libftprintf.a

Available rules

- make        # compile the library
- make all    # compile the library
- make clean  # remove object files
- make fclean # remove object files and library
- make re     # rebuild everything

### Usage

Include the header in your file:

#include "ft_printf.h"

Example:
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello %s\n", "42");
	ft_printf("Number: %d\n", 42);
	ft_printf("Hex: %x\n", 255);
	return (0);
}

Compile with: 
cc main.c libftprintf.a


### Algorithm and Data Structure

The program uses a simple linear parsing algorithm:

- Read the format string one character at a time.
- Print normal characters directly.
- When % is found, read the next character as a conversion specifier.
- Retrieve the matching argument with va_arg.
- Print the converted value and count the printed characters.

This approach is appropriate because the format string only needs to be read once, which keeps the implementation simple and efficient.

The main data structures used are:

- va_list for variadic arguments
- character pointers for parsing the format string
- integer counters for the return value

Helper functions are used to keep each conversion separate and make the code easier to read and maintain.

## Resources

### References
- man printf
- man stdarg
- man write
- 42 project subject
- google search

### AI usage
AI was used for debugging, testing support, and writing the README. It helped identify issues, suggest possible fixes, check certain outputs and behaviors, and improve the project documentation. It was not used to write the project functions.
