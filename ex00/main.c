/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 02:00:31 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/03 13:14:38 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush01.h>

int main(int argc,char **argv)
{
	int		views[16];
	int		grid[4][4];
	if (argc != 2)
	{
		ft_put_error();
		return (1);
	}
	ft_init_grid(grid);
	if (!ft_parse_input(argv[1], views))
	{
		ft_put_error(); 
		return (1);
	}
	if (ft_solve(grid, views, 0))
	{
		ft_put_error();
		return (0);
	}
}