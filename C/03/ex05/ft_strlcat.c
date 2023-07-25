/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:07:16 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/13 13:45:48 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
#include<string.h>
*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = dest_len;
	i = 0;
	while (src[i] && j + 1 < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (j < size)
		return (dest_len + src_len);
	else
		return (size + src_len);
}

/*
int	main(void)
{
	char	first[4] = "";
	char	last[] = " World!";
	
	printf("first: %ld\n", sizeof(first));
	printf("last: %ld\n", sizeof(last));
	
	printf("Total characters copied: %d\n", ft_strlcat(first, last, sizeof(first)));
	puts(first);
	return (0);
}
*/
