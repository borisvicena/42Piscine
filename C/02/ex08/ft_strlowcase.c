/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:04:48 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/11 20:16:11 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int		main(void)
{
	char string[] = {"HelloWOrlDandVIENNA"};
	int size = sizeof(string) / sizeof(string[0]);
	ft_strlowcase(string);
	for (int i = 0; i < size; i++)
	{
		printf("%c", string[i]);
	}
	return (0);
}
*/
