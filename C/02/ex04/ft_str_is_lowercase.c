/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:21:46 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/11 18:37:17 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z' ))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d, ", ft_str_is_lowercase(" "));
	printf("%d, ", ft_str_is_lowercase("abcdefghikjkldflajfhda"));
	printf("%d, ", ft_str_is_lowercase("AFHGJDHGBGKHDHHFDJSKG"));
	printf("%d, ", ft_str_is_lowercase("adfhafaFJAHFJKFAS"));
	printf("%d", ft_str_is_lowercase(""));	
	return (0);
}
*/
