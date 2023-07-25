/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:02:58 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/22 15:23:36 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_find_duplicates(char *base)
{
	int	i;
	int	j;
	int	base_value;

	i = 0;
	j = 0;
	base_value = ft_strlen(base);
	while (i < base_value)
	{
		j = i + 1;
		while (j < base_value)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_base(char *base)
{
	int	base_value;

	base_value = ft_strlen(base);
	if (base[0] == '\0' || base_value < 2)
		return (0);
	if (ft_find_duplicates(base))
		return (0);
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
			return (0);
		base++;
	}
	return (1);
}

unsigned int	ft_negative_check(int n)
{
	unsigned int	num;

	if (n < 0)
	{
		write(1, "-", 1);
		num = -n;
	}
	else
		num = n;
	return (num);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_value;
	char			buffer[64];
	unsigned int	i;
	long			num;

	if (ft_check_base(base))
	{
		i = 0;
		base_value = ft_strlen(base);
		num = ft_negative_check(nbr);
		if (num == 0)
			buffer[i++] = base[num % base_value];
		while (num > 0)
		{
			buffer[i] = base[num % base_value];
			num /= base_value;
			i++;
		}
		while (i > 0)
			write(1, &buffer[--i], 1);
	}
}

/*
#include <limits.h>
int	main(void)
{
	char	*base = "01";
	int		num = 0;
	ft_putnbr_base(num, base);
	return (0);
}
*/
