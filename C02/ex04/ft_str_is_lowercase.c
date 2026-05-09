/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 01:17:37 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/05 01:22:38 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] >= 'a'&& str[i] <= 'z'))
		{
			return(0);
		}
		i++;
	}
	return (1);
}

int	main(void)

{

	printf("%d\n", ft_str_is_lowercase("abc"));
	printf("%d\n", ft_str_is_lowercase("abcdef"));
	printf("%d\n", ft_str_is_lowercase("abcD"));
	printf("%d\n", ft_str_is_lowercase("abc123"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);

}