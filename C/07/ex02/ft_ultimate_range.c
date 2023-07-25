/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:05:17 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/19 09:35:53 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
/*
#include <stdio.h>
*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}

/*
int	main(void)
{
	int	*num_arr;
	int size;

	size = ft_ultimate_range(&num_arr, -5, 10);
	for (int i = 0; i < size; i++)
		printf("%d ",num_arr[i]);
	free (num_arr);
	return (0);
}
*/
