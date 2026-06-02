#include "ft_printf.h"

int	ft_putunsign_pf(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count = count + ft_putunsign_pf(n / 10);
	count = count + ft_putchar_pf((n % 10) + '0');
	return (count);
}
