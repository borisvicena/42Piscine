/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:24:14 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/19 09:54:59 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
/*
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

void	ft_attach_str(int size, char *arr, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		total_len;
	int		i;

	if (size == 0)
	{
		arr = (char *)malloc(1);
		arr = '\0';
		return (arr);
	}
	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (size - 1) * ft_strlen(sep) + 1;
	arr = (char *)malloc(total_len * sizeof(char));
	if (arr == NULL)
		return (NULL);
	ft_attach_str(size, arr, strs, sep);
	arr[total_len] = '\0';
	return (arr);
}

/*
int	main(void)
{
	char *string[] = {"Hello", "World", "Yesterday"};
	char *separator = ", '";
	char *res;
	res = ft_strjoin(3, string, separator);
	printf("%s", res);
	return (0);
}
*/
