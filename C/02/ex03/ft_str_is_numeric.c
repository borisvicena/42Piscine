/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:06:21 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/11 18:37:37 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 48 && c <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	printf("%d, ", ft_str_is_numeric(" "));
	printf("%d, ", ft_str_is_numeric("0987654321"));
	printf("%d, ", ft_str_is_numeric("he110w0r1d"));
	printf("%d, ", ft_str_is_numeric("helloworld"));
	printf("%d, ", ft_str_is_numeric("0101001001"));
	printf("%d", ft_str_is_numeric(""));
	return (0);
}
*/
