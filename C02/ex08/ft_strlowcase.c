/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 09:52:17 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/05 09:54:04 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i]!= '\0')
	{
		if (str[i] >= 'A'&& str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);
}

int	main(void)

{

	char	str1[] = "merhaba";
	char	str2[] = "Merhaba42!";
	char	str3[] = "abcDEF";
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	return (0);
}