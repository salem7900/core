#include "ft_printf.h"

int	ft_putptr_pf(void *ptr)
{
	int				count;
	char			*base;
	unsigned long	n;

	base = "0123456789abcdef";
	if (!ptr)
	{
		ft_putstr_pf("(nil)");
		return (5);
	}
	n = (unsigned long)ptr;
	ft_putstr_pf("0x");
	count = ft_puthexa_pf(n, base);
	return (count + 2);
}
