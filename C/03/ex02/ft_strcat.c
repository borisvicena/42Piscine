/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:34:21 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/10 19:53:19 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
#include<string.h>
*/

char	*ft_strcat(char *dest, char *src)
{
	char	*str;

	str = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}

/*
int	main(void)
{
	char	string1[80];
	char	string2[80];

	string1[0] = '\0';
	string2[0] = '\0';
	ft_strcat(string1, "Hello");
	ft_strcat(string1, ", this ");
	ft_strcat(string1, "is ");
	ft_strcat(string1, "cool!");
	puts(string1);
	printf("Compared to the actual function\n");
	strcat(string2, "Hello");
	strcat(string2, ", this ");
	strcat(string2, "is ");
	strcat(string2, "cool!");
	puts(string2);
	return (0);
}
*/
