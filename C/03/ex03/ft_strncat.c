/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:56:51 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/12 18:31:22 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
#include<string.h>
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
int	main(void)
{	
	char	string1[80];
	char	string2[80];

	string1[0] = '\0';
	string2[0] = '\0';
	ft_strncat(string1, "Hello", 4);
	ft_strncat(string1, ", this ", 3);
	ft_strncat(string1, "is ", 2);
	ft_strncat(string1, "cool!", 1);
	puts(string1);
	printf("Compared to the actual function\n");
	strncat(string2, "Hello", 4);
	strncat(string2, ", this ", 3);
	strncat(string2, "is ", 2);
	strncat(string2, "cool!", 1);
	puts(string2);
	return (0);
}
*/
