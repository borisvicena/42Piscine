/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:43:35 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/19 09:34:24 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
/*
#include <stdio.h>
*/

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;	

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*
int	main(void)
{
	int *num_arr;
	num_arr = ft_range(-600, 100);
	for (int i = 0; i < 700; i++)
		printf("%d", num_arr[i]);
	free (num_arr);
	return (0);
}
*/
