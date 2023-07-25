/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:13:41 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/12 12:31:50 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*
#include<stdio.h>
#include<string.h>
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find == NULL || *to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{	
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	haystack[] = {"GGGM"};
	char	needle[] = {"GGM"};
	
	printf("%s", ft_strstr(haystack, needle));
	printf("\nCompared to the actual function\n");
	printf("%s", strstr(haystack, needle));
	return (0);
}
*/
