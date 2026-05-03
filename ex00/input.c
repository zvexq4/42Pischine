/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 03:34:54 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/03 03:55:01 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush01.h>

int ft_parse_input(char *str, int views[16])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while(str[i])
	{
		if (i % 2 == 0)
		{
			if(str[i] < '1' || str[i] > '4')
			{
				return (0);
			}
			if ( j >= 16)
			{
				return(0);
			}
			i++;
		}
		if (i != 31 || j != 16)
		{
			return(0);
		}
	}
	return (1);
}