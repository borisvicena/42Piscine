/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:25:28 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/06 19:58:37 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num;

	num = 48;
	while (num < 58)
	{
		write(1, &num, 1);
		num++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
