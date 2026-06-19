/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 11:30:18 by sabdalla          #+#    #+#             */
/*   Updated: 2026/06/19 11:30:19 by sabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	x;

	num = n;
	if (num == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		write (fd, "-", 1);
		num = num * -1;
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	x = (num % 10) + 48;
	write (fd, &x, 1);
}

/*
int	main()
{
	ft_putnbr_fd(-2147483647, 1);
}
*/
