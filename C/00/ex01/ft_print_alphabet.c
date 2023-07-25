/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:04:39 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/06 20:01:11 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	num;

	num = 97;
	while (num < 123)
	{
		write(1, &num, 1);
		num++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
