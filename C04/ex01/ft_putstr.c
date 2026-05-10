/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 16:03:25 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/10 19:51:26 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	ft_putstr("merhaba");
	return (0);
}