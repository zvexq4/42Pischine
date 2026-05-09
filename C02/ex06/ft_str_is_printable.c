/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 09:39:41 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/05 09:43:39 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i]!= '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int	main(void)

{

	printf("%d\n", ft_str_is_printable("Hello World!"));
	printf("%d\n", ft_str_is_printable("abc123+-*/"));
	printf("%d\n", ft_str_is_printable("Hello\nWorld"));
	printf("%d\n", ft_str_is_printable("Hello\tWorld"));
	printf("%d\n", ft_str_is_printable(""));
	return (0);

}