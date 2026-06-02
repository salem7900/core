*This project has been created as part of the 42 curriculum by sabdalla*



### Description


The goal of the project is to recode the printf() function from _libc_.

The project requirements: 
• Do not implement the buffer management of the original printf().
• Your function has to handle the following conversions: _cspdiuxX%_
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.
• Your header file must be named ft_printf.h and must contain the prototype of
your ft_printf() function.




### Instructions


To compile the function, run make. This will generate the static library libftprintf.a.

To remove the object files, run make clean. To remove both the object files and the generated library, run make fclean. If you want to rebuild everything from scratch, use make re.

To use the library in another project, include the header file ft_printf.h in your source code and link the library when compiling your program.
