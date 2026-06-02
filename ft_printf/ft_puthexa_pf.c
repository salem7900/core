#include "ft_printf.h"

int	ft_puthexa_pf(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n > 15)
		count = count + ft_puthexa_pf(n / 16, base);
	count = count + ft_putchar_pf(base[n % 16]);
	return (count);
}
