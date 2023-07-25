/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:54:27 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/12 14:13:53 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
#include<string.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Helloa";
	str2 = "Hello";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("Output from the actual function:\n");
	printf("%d\n", strcmp(str1, str2));
	return (0);
}
*/
