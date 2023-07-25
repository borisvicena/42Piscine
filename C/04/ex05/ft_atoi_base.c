/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:00:43 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/22 12:44:22 by bvicena          ###   ########.fr       */
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

int	ft_check_base(char *base, int base_value)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base == NULL || base_value == 1)
		return (0);
	while (i < base_value)
	{
		j = i + 1;
		while (j < base_value)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-' || *base == ' ')
			return (0);
		base++;
	}
	return (1);
}

unsigned int	ft_negative_check(int n)
{
	unsigned int	num;

	if (n < 0)
		num = -n;
	else
		num = n;
	return (num);
}

int	get_base(char c, char *base, int *index_value)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
		{
			*index_value = i;
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_value;
	int	sign;
	int	result;
	int	index_value;

	result = 0;
	sign = 1;
	base_value = ft_strlen(base);
	if (!ft_check_base(base, base_value))
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str != '\0' && get_base(*str, base, &index_value))
	{
		result = result * base_value + index_value;
		str++;
	}
	return (result * sign);
}

/*
int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	char	*base = "0123456789ABCDEF";
	char		*num =  "           --------++++++--80000000*-------++++--";
	printf("%d", ft_atoi_base(num, base));
	return (0);
}
*/
