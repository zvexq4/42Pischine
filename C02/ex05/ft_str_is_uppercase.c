/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 01:33:37 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/05 01:36:56 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!(str[i] >= 'A'&& str[i] >= 'Z'))
		{
			return(0);
		}
		i++;
	}
	return (1);
}

int	main(void)

{

	printf("%d\n", ft_str_is_uppercase("abc"));
	printf("%d\n", ft_str_is_uppercase("abcdef"));
	printf("%d\n", ft_str_is_uppercase("abcD"));
	printf("%d\n", ft_str_is_uppercase("abc123"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);

}