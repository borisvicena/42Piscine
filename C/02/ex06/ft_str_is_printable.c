/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:43:06 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/08 18:20:35 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 32 && c <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d, ", ft_str_is_printable(" "));
	printf("%d, ", ft_str_is_printable("kjfad78af514@$^^$&%^(#)@*$@&"));
	printf("%d, ", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable(""));
	return (0);
}
*/
