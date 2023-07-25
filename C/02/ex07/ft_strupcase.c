/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:49:01 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/11 20:13:36 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
*/

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
int		main(void)
{
	char string[] = {"HellowoRldandvienna"};
	int size = sizeof(string) / sizeof(string[0]);
	ft_strupcase(string);
	for (int i = 0; i < size; i++)
	{
		printf("%c", string[i]);
	}
	return (0);
}
*/
