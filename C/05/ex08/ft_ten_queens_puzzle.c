/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvicena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:23:04 by bvicena           #+#    #+#             */
/*   Updated: 2023/07/23 20:15:50 by bvicena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(int board[10][10])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (board[j][i])
			{
				c = j + 48;
				write(1, &c, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	diagonal_check(int board[10][10], int row, int col)
{
	int	i;
	int	j;

	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (board[i][j])
			return (0);
		i--;
		j--;
	}
	i = row;
	j = col;
	while (i < 10 && j >= 0)
	{
		if (board[i][j])
			return (0);
		i++;
		j--;
	}
	return (1);
}

int	is_save(int board[10][10], int row, int col)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (board[row][i])
			return (0);
		i++;
	}
	return (diagonal_check(board, row, col));
}

int	solve_puzzle(int board[10][10], int col, int *counter)
{
	int	row;

	row = 0;
	if (col >= 10)
	{
		(*counter)++;
		print_solution(board);
		return (0);
	}
	while (row < 10)
	{
		if (is_save(board, row, col))
		{
			board[row][col] = 1;
			if (solve_puzzle(board, col + 1, counter))
				return (1);
			board[row][col] = 0;
		}
		row++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	counter;
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	counter = 0;
	solve_puzzle(board, 0, &counter);
	return (counter);
}

/*
int	main(void)
{
	ft_ten_queens_puzzle();
	// printf("Total number of displayed solutions: %d\n", ft_ten_queens_puzzle());
	return (0);
}
*/
