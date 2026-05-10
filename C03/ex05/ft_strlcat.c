/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hciftci <hciftci@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 15:27:42 by hciftci           #+#    #+#             */
/*   Updated: 2026/05/10 15:47:46 by hciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = 0;
	src_len = 0;
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

int	main(void)

{

	char	d1[20] = "Hello";
	char	d2[10] = "Hello";
	char	d3[6] = "Hello";
	char	d4[20] = "Hello";
	char	d5[20] = "";
	char	d6[20] = "abc";
	printf("1) ret: %u | dest: %s\n", ft_strlcat(d1, "World", 20), d1);
	printf("2) ret: %u | dest: %s\n", ft_strlcat(d2, "World", 10), d2);
	printf("3) ret: %u | dest: %s\n", ft_strlcat(d3, "World", 6), d3);
	printf("4) ret: %u | dest: %s\n", ft_strlcat(d4, "World", 3), d4);
	printf("5) ret: %u | dest: %s\n", ft_strlcat(d5, "abc", 20), d5);
	printf("6) ret: %u | dest: %s\n", ft_strlcat(d6, "", 20), d6);
	return (0);

}