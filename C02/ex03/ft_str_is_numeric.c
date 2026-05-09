/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 01:10:00 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/05 01:15:41 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)

{

	printf("%d\n", ft_str_is_numeric("12345"));
	printf("%d\n", ft_str_is_numeric("42a"));
	printf("%d\n", ft_str_is_numeric("12 34"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);

}