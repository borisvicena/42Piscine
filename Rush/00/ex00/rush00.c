/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:33:50 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/09 13:25:48 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check(int row, int column, int x, int y)
{
	if ((row == 0 && column == 0) || (row == 0 && column == x - 1))
		ft_putchar('o');
	else if ((row == y - 1 && column == 0) || (row == y - 1 && column == x - 1))
		ft_putchar('o');
	else if (!(row > 0 && row < y - 1))
		ft_putchar('-');
	else if (!(column < x - 1 && column > 0))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			check(row, column, x, y);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
