/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:41:36 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/08 16:04:36 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d, ", ft_str_is_alpha(" "));
	printf("%d, ", ft_str_is_alpha("helloworld"));
	printf("%d, ", ft_str_is_alpha("he11oworld"));
	printf("%d", ft_str_is_alpha(""));
	return (0);
}
*/
