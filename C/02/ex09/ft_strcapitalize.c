/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:12:58 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/09 18:46:44 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_special_char(char c)
{
	return ((c >= ' ' && c <= '/')
		|| (c >= ':' && c <= '@')
		|| (c >= '[' && c <= '`')
		|| (c >= '{' && c <= '~'));
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && is_lowercase(str[i]))
			str[i] = str[i] - 32;
		else if (is_special_char(str[i]))
		{
			if (is_lowercase(str[i + 1]))
			{
				++i;
				str[i] = str[i] - 32;
			}
		}
		else if (is_uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char string[] = {"salut, comMent+-* c tu vas ? 42mots qx; cinquante+et+un"};
	ft_strcapitalize(string);
	printf("%s", string);
	return (0);
}
*/
