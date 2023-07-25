/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:53:19 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/15 18:02:53 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar((nb % 10) + 48);
	}
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, ", ", 2);
	ft_putnbr(2147483647);
	write(1, ", ", 2);
	ft_putnbr(8);
	write(1, ", ", 2);
	ft_putnbr(42);
	write(1, ", ", 2);
	ft_putnbr(-153);
	write(1, ", ", 2);
	ft_putnbr(0);
	return (0);
}
*/
