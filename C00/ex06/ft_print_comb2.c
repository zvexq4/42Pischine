/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghost <ghost@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 02:36:55 by ghost             #+#    #+#             */
/*   Updated: 2026/05/01 03:16:41 by ghost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nummber(int number)
{
	char	first;
	char	second;

	first = (number / 10) + '0';
	second = (number % 10) + '0';
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_print_comb2(void)
{
	int	nmber1;
	int	nmber2;

	nmber1 = 0;
	while (nmber1 <= 98)
	{
		nmber2 = nmber1 + 1;
		while (nmber2 <= 99)
		{
			ft_print_nummber(nmber1);
			write(1, " ", 1);
			ft_print_nummber(nmber2);
			if (!(nmber1 == 98 && nmber2 == 99))
				write(1, ", ", 2);
			nmber2++;
		}
		nmber1++;
	}
}
