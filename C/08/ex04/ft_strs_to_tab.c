/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:47:53 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/18 12:20:28 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_str;

	stock_str = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (stock_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_strdup(av[i]);
		if (stock_str[i].copy == NULL)
		{
			while (i > 0)
				free(stock_str[--i].copy);
			free (stock_str);
			return (NULL);
		}
		i++;
	}
	stock_str[i].size = 0;
	stock_str[i].str = NULL;
	stock_str[i].copy = NULL;
	return (stock_str);
}

/*
int		main(void)
{
	char *string[] = {"Hello", "Testing", "Test12345"};
	t_stock_str *test;
	test = ft_strs_to_tab(3, string);
	ft_show_tab(test);
	return (0);
}
*/
