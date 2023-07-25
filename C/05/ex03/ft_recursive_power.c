/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:11:55 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/16 14:00:05 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>
*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
int	main(void)
{
	printf("%d", ft_recursive_power(-3, 5));
	return (0);
}
*/
