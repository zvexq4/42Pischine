/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 09:46:32 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/05 09:49:53 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i]!= '\0')
	{
		if (str[i] >= 'a'&& str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	return (0);
}