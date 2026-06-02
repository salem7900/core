#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_pf(char c);
int	ft_puthexa_pf(unsigned long n, char *base);
int	ft_putnbr_pf(int i);
int	ft_putptr_pf(void *ptr);
int	ft_putstr_pf(char *str);
int	ft_putunsign_pf(unsigned int n);

#endif
