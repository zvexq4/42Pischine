/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 00:36:08 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/05 00:47:07 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z')
		|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("Merhaba"));
	printf("%d\n", ft_str_is_alpha("abcDEF"));
	printf("%d\n", ft_str_is_alpha("abc123"));
	printf("%d\n", ft_str_is_alpha("abc def"));
	printf("%d\n", ft_str_is_alpha(""));

	return (0);
}