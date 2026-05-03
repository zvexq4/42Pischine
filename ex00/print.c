/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 02:11:28 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/03 03:34:25 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush01.h>

void	ft_put_error(void)
{
	write(1, "ERROR!\n", 7);
}

void ft_init_grid(int grid[4][4])
{
	int 	row;
	int		col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0 ;
			col++;
		}
		row++;
	}
}

void	ft_print_grid(int grid[4][4])
{
	int		row;
	int 	col;
	char	c;

	row = 0;
	while(row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (col != 3)
			{
				c = grid[row][col] + '0';
				write(1, &c, 1);
			}
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

