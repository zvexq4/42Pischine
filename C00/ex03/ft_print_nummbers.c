/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nummbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghost <ghost@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 01:43:31 by ghost             #+#    #+#             */
/*   Updated: 2026/05/01 01:49:57 by ghost            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nummbers;

	nummbers = '0';
	while (nummbers <= '9')
	{
		write(1, &nummbers, 1);
		nummbers++;
	}
}
