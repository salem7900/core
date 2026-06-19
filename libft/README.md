*This project has been created as part of the 42 curriculum by sabdalla.*

# Libft

## Description

**Libft** is a foundational project in the 42 curriculum whose goal is to recreate a personal C library from scratch. The project consists of implementing a collection of commonly used functions, mainly inspired by the standard C library, and compiling them into a static library named `libft.a`. This library is meant to become a reusable toolbox throughout the rest of the curriculum. Through Libft, the main objectives are to understand how standard C functions work internally, practice writing safe, modular, and reusable code, improve memory management and string manipulation skills, learn how to build and use a static library in C, and create a reliable base library for future 42 projects. The final result is a custom library containing utility functions for character checks, string manipulation, memory operations, conversions, output to file descriptors, and other helper features depending on the mandatory and bonus parts completed.

## Detailed Library Description

The library created in this project is a **static C library** named `libft.a`. It contains user-implemented versions of essential utility functions usually found in standard libraries, all prefixed with `ft_`.

### Main categories of functions

#### Character tests and conversions
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

#### String functions
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

#### Memory functions
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

#### Conversion functions
- `ft_atoi`
- `ft_itoa`

#### File descriptor output functions
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

The purpose of this library is to provide a reusable personal set of C functions that can be linked into future projects. Instead of depending only on external implementations, Libft helps build a solid understanding of low-level programming by reproducing core utilities manually. Because it is compiled as a static library, the functions can be reused simply by including the header file and linking `libft.a` during compilation.

## Instructions

### Files to submit
- `Makefile`
- `libft.h`
- `ft_*.c`

### Compilation rules
All `.c` files must compile with the following flags: `-Wall -Wextra -Werror`.

The project must include a `Makefile` with the following rules:
- `NAME`
- `all`
- `clean`
- `fclean`
- `re`

The static library must be created using the `ar` command. The use of `libtool` is forbidden.

### Build the library

- make
This command compiles the source files and creates libft.a.

Clean object files:
- make clean

Clean object files and library:
- make fclean

Rebuild the project:
- make re

Use the library in another project

Include the header in your source file:

#include "libft.h"

Compile your program with the library:

cc main.c libft.a
or

cc main.c -L. -lft

Project Constraints

The following technical constraints must be respected:

- global variables are strictly forbidden
- helper functions must be declared as static when limited to one file
- all files must be placed at the root of the repository
- unused files must not be submitted
- libft.a must be created at the root of the repository

Example

#include "libft.h"

int main(void)
{
	ft_putendl_fd("Hello from Libft!", 1);
	return (0);
}


## Resources

References

- The Linux man pages
- The manual pages for standard C library functions
- The GNU C Library documentation
- The POSIX documentation
- The 42 subject PDF and project guidelines
- Brian W. Kernighan and Dennis M. Ritchie, The C Programming Language
- Beej’s guides for low-level programming concepts


AI Usage

AI was used as a support tool for improving the wording and structure of the README, proofreading explanations and project presentation, and organizing the documentation into clear sections. AI was not used to replace understanding of the project requirements or core implementation logic. All code, function behavior, testing decisions, and final technical choices should be personally understood and validated before submission.

Notes

This project is an important step in the 42 curriculum because it establishes a personal library that can be reused in many future C projects. It also reinforces core programming concepts such as pointers, memory handling, modular code design, and static library creation.
