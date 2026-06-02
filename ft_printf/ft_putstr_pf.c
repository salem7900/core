#include "ft_printf.h"

int	ft_putstr_pf(char *str)
{
	int	n;

	if (!str)
		str = "(null)";
	n = 0;
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	return (n);
}
